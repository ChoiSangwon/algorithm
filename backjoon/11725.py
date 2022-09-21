from collections import deque
import sys
N = int(input())
arr=[i for i in range(1,N+1)]
check = [0 for i in range(N+1)]
res=dict()
for i in range(1,N+1):
    res[i]=[]
for i in range(N-1):
    a,b=map(int,sys.stdin.readline().rstrip().split())
    res[a].append(b)
    res[b].append(a)
qwe=deque()
w = 1
check[1]=1
for i in range(len(res[1])):
    if(check[res[1][i]]!=1):
        qwe.append(res[1][i])
        check[res[1][i]]=1
while len(qwe):
    t = qwe.popleft()
    for j in range(len(res[t])):
        if(check[res[t][j]]==0):
            check[res[t][j]]=t
            qwe.append(res[t][j])
for i in range(2,N+1):
    print(check[i])
