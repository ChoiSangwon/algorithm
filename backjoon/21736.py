import sys
from collections import deque 

N,M = map(int,input().split())
arr=[]
check=[[0 for _ in range(M)]for _ in  range(N)]
for i in range(N):
    arr.append(list(sys.stdin.readline()))

q = deque()

for i in range(N):
    for j in range(M):
        if(arr[i][j]=='I'):
            q.append((i,j))
            check[i][j]=1
res=0

while q:
    ci,cj=q.popleft()
    if(arr[ci][cj]=='P'):
        res+=1
    if(ci>0 and arr[ci-1][cj]!='X' and check[ci-1][cj]==0):
        q.append((ci-1,cj))
        check[ci-1][cj]=1
    if(cj>0 and arr[ci][cj-1]!='X' and check[ci][cj-1]==0):
        q.append((ci,cj-1))
        check[ci][cj-1]=1
    if(ci<N-1 and arr[ci+1][cj]!='X' and check[ci+1][cj]==0):
        q.append((ci+1,cj))
        check[ci+1][cj]=1
    if(cj<M-1 and arr[ci][cj+1]!='X' and check[ci][cj+1]==0):
        q.append((ci,cj+1))
        check[ci][cj+1]=1
if(res==0):
    print('TT')
else:
    print(res)

