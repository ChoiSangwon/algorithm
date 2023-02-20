import sys
sys.setrecursionlimit(1000000000)

N, M ,R =map(int,input().split())
check=[0]*(N+1)
arr={}
count=0

def DFS(R):
    global count
    count+=1
    check[R]=count
    arr[R].sort()
    for i in arr[R]:
        if(check[i]==0):
            DFS(i)

for i in range(1,N+1):
    arr[i]=[]
for i in range(M):
    a,b=map(int,sys.stdin.readline().split())
    arr[a].append(b)
    arr[b].append(a)

DFS(R)
for i in range(1,N+1):
    print(check[i])
