from collections import deque

m,n,h=map(int,input().split())
arr=[]
for _ in range(h):
    tmp=[]
    for _ in range(n):
        tmp.append(list(map(int,input().split())))
    arr.append(tmp)
# visited=[[[0 for _ in range(m)]for _ in range(n)]for _ in range(h)]

def check():
    global m,n,h
    for k in range(h):
        for i in range(n):
            for j in range(m):
                if arr[k][i][j]==0:
                    return False
    return True
q=deque()

for k in range(h):
    for i in range(n):
        for j in range(m):
            if arr[k][i][j]==1:
                q.append((k,i,j,0))
answer=0
while q:
    ck,ci,cj,count=q.popleft()
    answer=max(answer,count)
    d=[[0,0,1],[1,0,0],[0,1,0],[0,0,-1],[0,-1,0],[-1,0,0]]
    for a,b,c in d:
        nk=ck+a
        ni=ci+b
        nj=cj+c
        if 0<=nk<h and 0<=ni<n and 0<=nj<m and arr[nk][ni][nj]==0:
            arr[nk][ni][nj]=1
            q.append((nk,ni,nj,count+1))

if check():
    print(count)
else:
    print(-1)