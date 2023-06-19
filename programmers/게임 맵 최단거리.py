from collections import deque 

def solution(maps):
    answer = 0
    a=deque()
    d=[(-1,0),(0,1),(1,0),(0,-1)]
    n=len(maps)
    m=len(maps[0])
    check=[[0 for _ in range(m)]for _ in range(n)]
    check[0][0]=1
    a.append((0,0,1))
    while len(a)!=0:
        i,j,count=a.popleft()
        if(i==n-1 and j==m-1):
            return count
        for k in range(4):
            di=i+d[k][0]
            dj=j+d[k][1]
            if(0<=di<n and 0<=dj<m and check[di][dj]==0 and maps[di][dj]==1):
                check[di][dj]=1
                a.append((di,dj,count+1))
    return -1