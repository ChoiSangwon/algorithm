import sys
input = sys.stdin.readline
INF = float('inf')

n=int(input().rstrip())
graph=[[] for _ in range(n+1)]
visited=[0 for _ in range(n+1)]

answer1=0
answer2=0

def dfs(a,count):
    maxCount=count
    maxA=a
    visited[a]=1
    for i,c in graph[a]:
        if visited[i]==0:
            q,w=dfs(i,count+c)
            if w>maxCount:
                maxA=q
                maxCount=w
    visited[a]=0
    return [maxA,maxCount]

for i in range(n):
    arr=list(map(int,input().rstrip().split()))
    a=arr[0]
    l = len(arr)-2
    for i in range(1,l+1,2):
        graph[a].append((arr[i],arr[i+1]))

visited[1]=1
a,answer1=dfs(1,0)
visited[1]=0
print(dfs(a,0)[1])