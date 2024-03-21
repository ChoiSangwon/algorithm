import sys
import heapq
input = sys.stdin.readline
print = sys.stdout.write

INF=10000000000000

V,E=map(int,input().split())
K=int(input())
graph=[{} for _ in range(V+1)]
dist=[INF for _ in range(V+1)]

def djikstra(start):
    q = []
    heapq.heappush(q, (0, start)) 
    dist[start] = 0

    while q:
        d, now = heapq.heappop(q)
        if dist[now] < d:
            continue
        for n, v in list(graph[now].items()):
            cost = d + v
            if cost < dist[n]:
                dist[n] = cost
                heapq.heappush(q, (cost, n))

for i in range(E):
    s,d,v = map(int,input().split())
    if d in graph[s] and graph[s][d]<v:
        continue
    graph[s][d]=v
djikstra(K)

for i in range(1,V+1):
    if(dist[i]==INF):
        print("INF\n")
    else:
        print(str(dist[i])+"\n")
