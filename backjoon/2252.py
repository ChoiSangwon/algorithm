from collections import deque
import sys
input=sys.stdin.readline

n,m=map(int,input().split())

inres=[0]*(n+1)
graph=[[] for _ in range(n+1)]
visited=[0]*(n+1)
q=deque()
res=[]

for i in range(m):
    a,b=map(int,input().split())
    graph[a].append(b)
    inres[b]+=1

for i in range(1,n+1):
    if inres[i]==0:
        q.append(i)

while q:
    cur=q.popleft()
    res.append(str(cur))
    for i in graph[cur]:
        inres[i]-=1
        if inres[i]==0:
            q.append(i)
print(' '.join(res))