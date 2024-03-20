import sys
input = sys.stdin.readline

INF=100000000000

n,m=map(int,input().split())
graph = [{} for _ in range(n+1)]

def dijkstra(start):
    visited = [0 for _ in range(n+1)]
    dist = [INF for _ in range(n+1)]
    visited[start]=1
    dist[start]=0
    
    for i,count in list(graph[start].items()):
        dist[i]=count
    for _ in range(n-1):
        cnt=INF
        index=0
        for i in range(1,n+1):
            if dist[i] < cnt and visited[i]==0:
                index=i
                cnt=dist[i]
        visited[index]=1
        for i,count in list(graph[index].items()):
            if dist[i]>count+dist[index]:
                dist[i]=count+dist[index]
    return dist

for i in range(m):
    s,d,c=map(int,input().split())
    if d in graph[s] and graph[s][d]<c:
        continue
    graph[s][d]=c
    if s in graph[d] and graph[d][s]<c:
        continue
    graph[d][s]=c

a,b=map(int,input().split())
res1=dijkstra(a)
res2=dijkstra(b)
res = min(res1[1]+res1[b]+res2[n],res2[1]+res2[a]+res1[n])
if(res>=INF):
    print(-1)
else:
    print(res)