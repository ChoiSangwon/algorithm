import sys

sys.setrecursionlimit(10000000)

n=int(input())
arr=[]
check=[]
maxwater=0
d=[(0,1),(1,0),(0,-1),(-1,0)]

for i in range(n):
    arr.append(list(map(int,input().split())))
    maxwater=max(maxwater,max(arr[i]))


check=[]
res=1
def dfs(i,j,check):
    check[i][j]=1
    for a,b in d:
        ni=i+a
        nj=j+b
        if(0<=ni<n and 0<=nj<n and check[ni][nj]==0):
            dfs(ni,nj,check)


for i in range(1,maxwater+1):
    check=[[0 if arr[b][a]>i else 1 for a in range(n)] for b in range(n)]
    tmp=0

    for j in range(n):
        for k in range(n):
            if check[j][k]==0:
                dfs(j,k,check)
                tmp+=1
    res=max(res,tmp)

print(res)
