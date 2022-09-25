import sys
from collections import deque
N,M = map(int,input().split())
S,E = map(int,input().split())
arr = dict()
check = [int(1e7) for i in range(N+1)]

for i in range(1,N+1):
    arr[i]=[]

for i in range(M):
    a,b = map(int,sys.stdin.readline().split())
    arr[a].append(b)
    arr[b].append(a)

q = deque()
check[S]=0
q.appendleft(S)

while q:
    d = q.pop()
    if d==E:
        print(check[d])
        exit()
    t1 = d+1
    t2 = d-1
    if t1<=N and (check[t1] > check[d]+1): 
        q.appendleft(t1)
        check[t1] = check[d]+1
    if 1<=t2 and (check[t2] > check[d]+1): 
        q.appendleft(t2)
        check[t2] = check[d]+1
    for i in arr[d]:
        if(check[i]>check[d]+1):
            q.appendleft(i)
            check[i]=check[d]+1
        
    