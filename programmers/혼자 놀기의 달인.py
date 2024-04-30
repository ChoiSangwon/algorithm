def solution(cards):
    n=len(cards)
    visited=[0 for i in range(n)]
    count=1
    res={}
    
    def check(a,q):
        visited[a]=count
        b=q
        if visited[cards[a]-1]==0:
            b=check(cards[a]-1,q+1)
        return b 
    
    while visited.count(0)!=0:
        for i in range(n):
            if visited[cards[i]-1]==0:
                r=check(cards[i]-1,1)
                res[count]=r
                count+=1
                break
        count+=1
    if len(res)==1:
        return 0
    else:
        res=list(res.items())
        print(res)
        res.sort(key=lambda x:x[1], reverse=True)
        return res[0][1]*res[1][1]
        