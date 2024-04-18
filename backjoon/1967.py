import sys
sys.setrecursionlimit(100000)
n=int(input())
graph=[[] for _ in range(n+1)]
visited=[0 for _ in range(n+1)]

def dfs(a,count):
    maxCount=count
    maxA=a
    visited[a]=1
    for i,c in graph[a]:
        if visited[i]==0:
            d,e=dfs(i,c+count)
            if e>maxCount:
                maxCount=e
                maxA=d
    visited[a]=0
    return [maxA,maxCount]

for i in range(n-1):
    a,b,c=map(int,input().split())
    graph[a].append((b,c))
    graph[b].append((a,c))

visited[1]=1
a,b=dfs(1,0)
visited[1]=0
print(dfs(a,0)[1])
