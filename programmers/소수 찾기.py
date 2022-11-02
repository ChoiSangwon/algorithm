def solution(n):
    count=0
    for i in range(2,n+1):
        check=True
        for j in range(2,int(i**(1/2))+1):
            if(i%j==0):
                check=False
                break
        if(check):
            count+=1
    return count