import sys 
sys.setrecursionlimit(10**6)
N,M = map(int,input().split())
res=[list(input()) for i in range(N)]

def DFS(i,j):
    res[i][j]='2'
    if(i==N-1):
        print('YES')
        exit()
    if(i>0 and res[i-1][j]=='0'):
        DFS(i-1,j)
    if(j>0 and res[i][j-1]=='0'):
        DFS(i,j-1)
    if(i<N-1 and res[i+1][j]=='0'):
        DFS(i+1,j)
    if(j<M-1 and res[i][j+1]=='0'):
        DFS(i,j+1)


for i in range(M):
    if(res[0][i]=='0'):
        DFS(0,i)
print('NO')