import sys

sys.setrecursionlimit(100000000)

n, m = map(int,input().split())
arr=[]
d=[(0,1),(1,0),(-1,0),(0,-1)]
check=[[0 for _ in range(m)] for _ in range(n)]

for i in range(n):
    arr.append(list(input()))

wolf=0
sheep=0

def dfs(i,j):
    global wolf,sheep
    check[i][j]=1
    if arr[i][j]=='k':
        sheep+=1
    if arr[i][j]=='v':
        wolf+=1
    
    for a,b in d:
        ni=i+a
        nj=j+b
        if(0<=ni<n and 0<=nj<m and check[ni][nj]==0 and arr[ni][nj]!='#'):
            dfs(ni,nj)

sheepWin=0
wolfWin=0
for i in range(n):
    for j in range(m):
        wolf=0
        sheep=0
        if (check[i][j]==0 and arr[i][j]!='#'):
            dfs(i,j)

        if(sheep>wolf):
            sheepWin+=sheep
        else:
            wolfWin+=wolf
print(sheepWin,wolfWin)