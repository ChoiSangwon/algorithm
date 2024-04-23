n=int(input())
arr=[]
visited=[[0 for _ in range(n)] for _ in range(n)]

for _ in range(n):
    arr.append(list(map(int,input())))

count=0
def dfs(i,j):
    global count
    count+=1
    d=[(0,1),(1,0),(-1,0),(0,-1)]
    for a,b in d:
        ni=i+a
        nj=j+b
        if 0<=ni<n and 0<=nj<n and arr[ni][nj]==1 and visited[ni][nj]==0:
            visited[ni][nj]=1
            dfs(ni,nj)

aaa=[]
for i in range(n):
    for j in range(n):
        if arr[i][j]==1 and visited[i][j]==0:
            visited[i][j]=1
            count=0
            dfs(i,j)
            aaa.append(count)
print(len(aaa))
aaa.sort()
for i in aaa:
    print(i)
