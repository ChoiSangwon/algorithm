import heapq

INF = 100000000

n,m,r=map(int,input().split())
item=list(map(int,input().split()))

graph = [[] for i in range(n+1)]

def djikstra(start):
    dist=[INF for _ in range(n+1)]
    q=[]
    dist[0]=0
    heapq.heappush(q,(0,start))
    while q:
        cost,i=heapq.heappop(q)
        if dist[i]<cost:
            continue
        for j,c in graph[i]:
            if dist[j]>cost+c:
                dist[j]=cost+c
                heapq.heappush(q,(cost+c,j))
    return dist
    
def sumItem(dist,i):
    ans=item[i-1]
    for j in range(1,n+1):
        if i==j:
            continue
        if dist[j]<=m:
            ans+=item[j-1]
    return ans

for i in range(r):
    a,b,c=map(int,input().split())
    graph[a].append((b,c))
    graph[b].append((a,c))

aaa=[]
for i in range(1,n+1):
    dist=djikstra(i)
    aaa.append(sumItem(dist,i))
print(max(aaa))