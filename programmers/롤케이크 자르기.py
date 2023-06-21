def solution(topping):
    answer=0
    a={}
    b={}
    for i in range(len(topping)):
        if(topping[i] not in a):
            a[topping[i]]=1
        else:
            a[topping[i]]+=1
    for i in range(len(topping)):
        if(topping[i] not in b):
            b[topping[i]]=1
        else:
            b[topping[i]]+=1
        if(a[topping[i]]==1):
            del a[topping[i]]
        else:
            a[topping[i]]-=1
        if(len(a)==len(b)):
            answer+=1
    
    return answer