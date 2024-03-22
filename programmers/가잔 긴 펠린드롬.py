def solution(s):
    answer = 1
    n=len(s)
    for i in range(n):
        start=i
        a=1
        while True:
            if start+a>=n or start-a<0:
                break
            if s[start-a:start]==s[start+a:start:-1]:
                answer=max(answer,a*2+1)
            a+=1
        a=0
        while True:
            if i==0 or s[start]!=s[start-1]:
                break
            if start+a>=n or start-a<0:
                break
            if s[start-a-1:start-1]==s[start+a:start:-1]:
                answer=max(answer,a*2+2)
            a+=1 
    return answer
