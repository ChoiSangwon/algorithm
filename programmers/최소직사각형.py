def solution(sizes):
    a=[]
    b=[]
    for i in sizes:
        if(i[0]>i[1]):
            a.append(i[0])
            b.append(i[1])
        else:
            a.append(i[1])
            b.append(i[0])
    return max(a)*max(b)