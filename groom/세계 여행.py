import sys
from collections import defaultdict, deque

sys.setrecursionlimit(1000000)
input = sys.stdin.readline

n, m = map(int, input().split())
arr = [0] + list(map(int, input().split()))
graph = defaultdict(list)

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

def dfs(start, lan):
    stack = [start]
    visited = [False] * (n + 1)
    visited[start] = True
    count = 1

    while stack:
        v = stack.pop()
        for i in graph[v]:
            if not visited[i] and (arr[i] == lan or arr[i] == arr[1]):
                visited[i] = True
                count += 1
                stack.append(i)
    
    return count

res = 0
for i in range(2, n + 1):
    count = dfs(1, i)
    res = max(count, res)

print(res)