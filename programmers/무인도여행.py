import sys
sys.setrecursionlimit(10**6)

def dfs(maps,check,i,j,n,m,answer):
    check[i][j]=1
    answer[-1]+=int(maps[i][j])
    d=[(0,1),(1,0),(-1,0),(0,-1)]
    for a,b in d:
        ci=i+a
        cj=j+b
        if(0<=ci<n and 0<=cj<m and check[ci][cj]==0 and maps[ci][cj]!='X'):
            check[ci][cj]=1
            dfs(maps,check,ci,cj,n,m,answer)
    

def solution(maps):
    answer = []
    
    n=len(maps)
    m=len(maps[0])
    check=[[0 for _ in range(m)]for _ in range(n)]
    
    for i in range(n):
        for j in range(m):
            if(maps[i][j]!='X' and check[i][j]==0):
                answer.append(0)
                dfs(maps,check,i,j,n,m,answer)
    
    if(len(answer)==0):
        return [-1]
    else:
        return sorted(answer)