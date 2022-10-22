def solution(n):
    answer = 1
    for i in range(1,n):
        tmp=i
        j=i+1
        while tmp<=n:
            if(tmp==n):
                answer+=1
            tmp+=j
            j+=1
    return answer