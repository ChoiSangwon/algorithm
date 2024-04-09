from collections import deque

q=deque()
res=100000
resCount=0
n,k=map(int,input().split())
visited=[100000 for _ in range(100001)]

q.append((0,n))

while q:
    count,cur=q.popleft()
    visited[cur]=count
    if count>res:
        break
    if cur==k:
        if res>count:
            res=count
            resCount=1
        elif res==count:
            resCount+=1
    if cur-1>=0 and visited[cur-1]>count:
        q.append((count+1,cur-1))
    if cur*2<=100000 and visited[cur*2]>count:
        q.append((count+1,cur*2))
    if cur+1<=k and visited[cur+1]>count:
        q.append((count+1,cur+1))
print(res)
print(resCount)