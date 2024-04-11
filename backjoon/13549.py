from collections import deque
n,k = map(int,input().split())
q=deque()
visited = [100000 for _ in range(100001)]

q.append((n,0))

res=0

while q:
    cur,count=q.popleft()
    visited[cur]=count
    if cur==k:
        res=count
        break
    if cur*2<=100000 and visited[cur*2]>count:
        q.append((cur*2,count))
    if cur-1>=0 and visited[cur-1]>count:
        q.append((cur-1,count+1))
    if cur+1<=k and visited[cur+1]>count:
        q.append((cur+1,count+1))
print(res)