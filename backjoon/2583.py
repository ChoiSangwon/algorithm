import sys
sys.setrecursionlimit(1000000)

M,N,K=map(int,input().split())
arr=[[0 for _ in range(M)]for _ in range(N)]
check=[[0 for _ in range(M)]for _ in range(N)]
asdf=[(0,1),(1,0),(-1,0),(0,-1)]

def solve(a,b):
    global res
    res+=1
    check[a][b]=1
    for i,j in asdf:
        ca=a+i
        cb=b+j
        if 0<=ca<N and 0<=cb<M and check[ca][cb]==0 and arr[ca][cb]==0:
            solve(ca,cb)

for i in range(K):
    a,b,c,d=map(int,input().split())
    for j in range(a,c):
        for k in range(b,d):
            # print(k,j)
            arr[j][k]=1

res=0
count=0
resarr=[]
for i in range(N):
    for j in range(M):
        if(check[i][j]==0 and arr[i][j]==0):
            res=0
            count+=1
            solve(i,j)
            resarr.append(res)
print(count)
print(*sorted(resarr))

