from collections import deque
import sys

a,b=map(int,input().split())
N,M = map(int,input().split())

check=[-1]*(N+1)
res={}
minRes = 100000000

for i in range(1,N+1):
    res[i]=[]
for i in range(M):
    c,d=map(int,sys.stdin.readline().split())
    res[c].append(d)
    res[d].append(c)

if(a==b):
    print(0)
    exit()
q=deque()
q.append((a,0))
check[a]=1
while q:
    ca,cb=q.popleft()
    if(ca==b):
        minRes=min(cb,minRes)
    for i in res[ca]:
        if(check[i]==-1):
            check[i]=1
            q.append((i,cb+1))

if(minRes==100000000):
    print(-1)
else:
    print(minRes)
