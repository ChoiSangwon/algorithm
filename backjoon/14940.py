from collections import deque

q=deque()
d=[(0,1),(1,0),(-1,0),(0,-1)]
N,M= map(int,input().split())
check=[[-1 for _ in range(M)] for _ in range(N)]
arr=[]
for i in range(N):
    arr.append(list(map(int,input().split())))

for i in range(N):
    for j in range(M):
        if arr[i][j]==2:
            q.append((i,j,0))
            check[i][j]=0

while len(q)>0:
    i,j,count=q.popleft()
    for a,b in d:
        ci=i+a
        cj=j+b
        if 0<=ci<N and 0<=cj<M and arr[ci][cj]==1 and check[ci][cj]==-1:
            check[ci][cj]=count+1
            q.append((ci,cj,count+1))

for i in range(N):
    for j in range(M):
        if arr[i][j]==0:
            print(0,end=" ")
        elif check[i][j]==-1:
            print(-1,end=" ")
        else:
            print(check[i][j],end=" ")
    print()
