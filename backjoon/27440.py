from collections import deque
def bfs(n):
    q = deque([(n, 0)])
    visited = set([n]) 
    while q:
        cur, count = q.popleft()
        if cur == 1:
            return count
        if cur % 3 == 0 and (cur // 3) not in visited:
            q.append((cur // 3, count + 1))
            visited.add(cur // 3)
        if cur % 2 == 0 and (cur // 2) not in visited:
            q.append((cur // 2, count + 1))
            visited.add(cur // 2)
        if (cur - 1) not in visited:
            q.append((cur - 1, count + 1))
            visited.add(cur - 1)
    return -1  
n=int(input())
print(bfs(n))