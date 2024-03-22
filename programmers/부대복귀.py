import heapq
def solution(n, roads, sources, destination):
    answer = []
    INF = 1000000000
    graph = [[] for _ in range(n+1)]
    visited=[0 for _ in range(n+1)]
    dist=[INF for _ in range(n+1)]
    for i,j in roads:
        graph[i].append(j)
        graph[j].append(i)
    
    dist[destination]=0
    pq = [(0, destination)]
    while pq:
        count, city = heapq.heappop(pq)
        if visited[city]:
            continue
        visited[city]=1
        for i in graph[city]:
            if dist[i]>count+1:
                dist[i]=count+1
                heapq.heappush(pq,(count+1,i))

    for i in sources:
        if dist[i]==INF:
            answer.append(-1)
        else:
            answer.append(dist[i])
    return answer