import sys
from collections import deque
input= sys.stdin.readline

N,M=map(int,input().split())
arr={}
res=[]
for i in range(1,N+1):
    arr[i]=[]
for i in range(M):
    a,b=map(int,input().split())
    arr[a].append(b)
    arr[b].append(a)
for i in range(1,N+1):
    check=[0]*(N+1)
    q=deque()
    q.append((i,1))
    check[i]=-1
    while q:
        a,count=q.popleft()
        for i in arr[a]:
            if(check[i]==0):
                q.append((i,count+1))
                check[i]=count
    res.append(sum(check)+1)
print(res.index(min(res))+1)
