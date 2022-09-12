from collections import deque

N,M,V = map(int,input().split())
arr={}
arr1={}
check = [0 for i in range(N+1)]
check1 = [0 for i in range(N+1)]

def DFS(a):
    print(a,end=" ")
    check[a]=1
    for i in range(len(arr[a])):
        if(check[arr[a][i]]==0):
            DFS(arr[a][i])

for i in range(1,N+1):
    arr[i]=[]
    arr1[i]=[]
for i in range(M):
    a,b=map(int,input().split())
    arr1[a].append(b)
    arr1[b].append(a)
    arr[a].append(b)
    arr[b].append(a)
for i in range(1,N+1):
    arr1[i]=sorted(arr1[i])
    arr[i]=sorted(arr[i])
DFS(V)
print()
check1[V]=1
aaa=deque()
for i in arr1[V]:
    aaa.appendleft(i)
    check1[i]=1
print(V,end=" ")
while(len(aaa)!=0):
    b=aaa.pop()
    check1[b]=1
    print(b,end=" ")
    for i in range(len(arr1[b])):
        if(check1[arr1[b][i]]==0):
            aaa.appendleft(arr1[b][i])
            check1[arr1[b][i]]=1


