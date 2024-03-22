from collections import deque
import sys
input = sys.stdin.readline
d=[(0,1),(0,-1),(1,0),(-1,0)]
arr=[]
INF = 1000000000000
n,m= map(int,input().split())

visited=[[[True,True] for _ in range(m)] for _ in range(n)]
for i in range(n):
    arr.append(list(input()))

q=deque()
q.append((0,0,1,True))
res=-1
while q:
    i,j,count,flag=q.popleft()
    if(i==n-1 and j==m-1):
        res=count
        break

    for a,b in d:
        ci=i+a
        cj=j+b
        if 0<=ci<n and 0<=cj<m:
            if arr[ci][cj]=='0' and visited[ci][cj][flag]:
                visited[ci][cj][flag]=False
                q.append((ci,cj,count+1,flag))
            if arr[ci][cj]=='1' and flag and visited[ci][cj][1]:
                visited[ci][cj][1]=False
                q.append((ci,cj,count+1,False))
print(res)
