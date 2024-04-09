import sys
import heapq
input = sys.stdin.readline

sys.setrecursionlimit(10000000)

INF = 100000000

n=int(input())
m=int(input())

graph = [[] for _ in range(n+1)]

def findLoad(end, prev):
    path = []
    while end is not None:
        path.append(str(end))
        end = prev[end]
    return path[::-1]  

def dijkstra(start):
    dist = [INF for _ in range(n+1)]
    prev = [None for _ in range(n+1)]
    dist[start] = 0
    queue = []
    heapq.heappush(queue, (0, start)) 
    
    while queue:
        current_dist, current_node = heapq.heappop(queue)
        if dist[current_node] < current_dist:
            continue
        for adj_node, weight in graph[current_node]:
            distance = current_dist + weight
            if distance < dist[adj_node]:
                dist[adj_node] = distance
                prev[adj_node] = current_node
                heapq.heappush(queue, (distance, adj_node))
    
    return dist, prev

for _ in range(m):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))

start, end = map(int, input().split())

dist, prev = dijkstra(start)
path = findLoad(end, prev)

print(dist[end])
print(len(path))
print(' '.join(path))
