def solution(answers):
    answer = []
    arr2=[2,1,2,3,2,4,2,5]
    arr3=[3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    count=[0,0,0]
    for i in range(len(answers)):
        if(i%5+1==answers[i]):
            count[0]+=1
        if(arr2[i%8]==answers[i]):
            count[1]+=1
        if(arr3[i%10]==answers[i]):
            count[2]+=1
    res=max(count)
    for i in range(3):
        if(res==count[i]):
            answer.append(i+1)
                
            
    return answer