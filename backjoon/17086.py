from collections import deque
N,M= map(int,input().split())
res=[]
for i in range(N):
    res.append(list(map(int,input().split())))
arrX=[-1,0,1,0,-1,-1,1,1]
arrY=[0,-1,0,1,-1,1,-1,1]

q = deque()
for i in range(N):
    for j in range(M):
        if(res[i][j]==1):
            res[i][j]=-1
            q.append((i,j,1))
            
while len(q)!=0:
    cx,cy,count = q.popleft()
    for i in range(8):
        n = cx+arrX[i]
        m = cy+arrY[i]
        if n>=0 and m>=0 and n<N and m<M and res[n][m]==0:
            q.append((n,m,count+1))
            res[n][m]=count
resL=0
for i in range(N):
    resL=max(resL,max(res[i]))
print(resL)