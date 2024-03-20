import sys
input = sys.stdin.readline

INF = 1000000000000

n=int(input())
m=int(input())
visited=[0 for _ in range(n+1)]
dist=[INF for _ in range(n+1)]
graph = [{} for _ in range(n+1)]

def get_small():
    index=0
    count = INF
    for i in range(1,n+1):
        if dist[i]<count and visited[i]==0:
            count=dist[i]
            index=i
    return index

def dijkstra(start):
    dist[start]=0
    visited[start]=1
    for i,count in list(graph[start].items()):
        dist[i]=count

    for _ in range(n-1):
        cur=get_small()
        visited[cur]=1
        for i,count in list(graph[cur].items()):
            if dist[cur]+count <dist[i]:
                dist[i]=dist[cur]+count

for i in range(m):
    s,d,c=map(int,input().split())
    if d in graph[s] and graph[s][d]<c:
        continue
    graph[s][d]=c

a,b=map(int,input().split())
dijkstra(a)
print(dist[b])