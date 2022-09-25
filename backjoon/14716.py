import sys
sys.setrecursionlimit(10**6)
N , M = map(int,input().split())
check = [[0 for i in range(M)] for j in range(N)]
arr = []
for i in range(N):
    tmp = list(map(int,input().split()))
    arr.append(tmp)

def solve(i,j):
    check[i][j]=1
    if(i>0 and check[i-1][j]==0 and arr[i-1][j]==1):
        solve(i-1,j)
    if(j>0 and check[i][j-1]==0 and arr[i][j-1]==1):
        solve(i,j-1)
    if(i<N-1 and check[i+1][j]==0 and arr[i+1][j]==1):
        solve(i+1,j)
    if(j<M-1 and check[i][j+1]==0 and arr[i][j+1]==1):
        solve(i,j+1)
    if(i>0 and j>0 and check[i-1][j-1]==0 and arr[i-1][j-1]==1):
        solve(i-1,j-1)
    if(i>0 and j<M-1 and check[i-1][j+1]==0 and arr[i-1][j+1]==1):
        solve(i-1,j+1)
    if(j>0 and i<N-1 and check[i+1][j-1]==0 and arr[i+1][j-1]==1):
        solve(i+1,j-1)
    if(i<N-1 and j<M-1 and check[i+1][j+1]==0 and arr[i+1][j+1]==1):
        solve(i+1,j+1)
res=0
for i in range(N):
    for j in range(M):
        if(check[i][j]==0 and arr[i][j]==1):
            solve(i,j)
            res+=1
print(res)
