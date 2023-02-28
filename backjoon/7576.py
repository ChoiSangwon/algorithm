import sys
from collections import deque
input = sys.stdin.readline
M,N = map(int,input().split())
arr = []
d=[(0,1),(1,0),(-1,0),(0,-1)]
for i in range(N):
    arr.append(list(map(int,input().split())))

check=[[0 for _ in range(M)]for _ in range(N)]
q=deque()
res=0
ti,tj=0,0
for i in range(N):
    for j in range(M):
        if arr[i][j]==1:
            q.append((i,j,0))
            check[i][j]=1
        if arr[i][j]==0:
            res+=1

while q:
    ci,cj,count = q.popleft()
    for i,j in d:
        qi=ci+i
        qj=cj+j
        if(0<=qi<N and 0<=qj<M and arr[qi][qj]==0):
            arr[qi][qj]=1
            q.append((qi,qj,count+1))

flag=True
for i in range(N):
    for j in range(M):
        if(arr[i][j]==0):
            flag=False
            break
if(flag):
    print(count)
else:
    print(-1)
