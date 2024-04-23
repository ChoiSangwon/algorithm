from collections import Counter

t=int(input())
for _ in range(t):
    n=int(input())
    res=[]
    answer=1    
    for _ in range(n):
        res.append(list(input().split()))
    ans=Counter(kind for name, kind in res)
    for i in ans.values():
        answer*=i+1
    answer-=1
    print(answer)
