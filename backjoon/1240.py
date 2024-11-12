from collections import deque
import sys
input = sys.stdin.readline

n,m = map(int,input().split())

arr=[[]for _ in range(n+1)]

for i in range(n-1):
    a,b,c=map(int,input().split())
    arr[a].append((b,c))
    arr[b].append((a,c))


for j in range(m):
    a,b=map(int,input().split())
    q=deque()
    res=0
    check=[100000000]*(n+1)

    for i,c in arr[a]:
        q.append((i,c))
    while(q):
        ci,cost=q.popleft()
        check[ci]=cost
        if ci==b:
            res=cost
            break
        for i,c in arr[ci]:
            if(check[i]>c+cost):
                q.append((i,c+cost))
    print(cost)
