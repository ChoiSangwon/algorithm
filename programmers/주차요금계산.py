
def solution(fees, records):
    answer = []
    aaa={}
    check={}
    for i in range(len(records)):
        hour,number,status = records[i].split()
        if(status=='IN'):
            check[number]=hour
        else:
            h,m=check[number].split(":")
            ch,cm=hour.split(':')
            tmp = (int(ch)-int(h))*60 +(int(cm)-int(m))
            if(number not in aaa):
                aaa[number]=tmp
            else:
                aaa[number]+=tmp
            del check[number]
    
    for i in check:
        h,m=check[i].split(":")
        tmp = (23-int(h))*60 +(59-int(m))
        if(i not in aaa):
            aaa[i]=tmp
        else:
            aaa[i]+=tmp
    aaa=sorted(aaa.items(), key=lambda x: x[0])
    for i in aaa:
        if(i[1]-fees[0]<0):
            answer.append(fees[1])
        else:
            if ((i[1]-fees[0])%fees[2]==0):
                answer.append(fees[1]+((i[1]-fees[0])//fees[2])*fees[3])
            else:
                answer.append(fees[1]+((i[1]-fees[0])//fees[2]+1)*fees[3])

    return answer
