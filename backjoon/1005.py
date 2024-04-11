from collections import deque
import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    resCost=0
    q=deque()
    n,k=map(int,input().split())
    graph=[[] for i in range(n+1)]
    inres=[0 for _ in range(n+1)]
    time=[0 for _ in range(n)]

    cost=list(map(int,input().split()))

    for _ in range(k):
        a,b=map(int,input().split())
        graph[a].append(b)
        inres[b]+=1
    x=int(input())
    for i in range(1,n+1):
        if inres[i]==0:
            time[i-1]=cost[i-1]
            q.append(i)
    while q:
        cur = q.popleft()
        if cur==x:
            print(time[cur-1])
        for i in graph[cur]:
            inres[i]-=1
            time[i-1]=max(time[i-1],time[cur-1]+cost[i-1])
            if inres[i]==0:
                q.append(i)




    
