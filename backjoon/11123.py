import sys
sys.setrecursionlimit(1000000000)

def DFS(a,b):
    arr[a][b]='.'
    if(0<=a-1<N and 0<=b<M  and arr[a-1][b]=='#'):
        DFS(a-1,b)
    if(0<=a+1<N and 0<=b<M  and arr[a+1][b]=='#'):
        DFS(a+1,b)
    if(0<=a<N and 0<=b-1<M and  arr[a][b-1]=='#'):
        DFS(a,b-1)
    if(0<=a<N and 0<=b+1<M and arr[a][b+1]=='#'):
        DFS(a,b+1)

T = int(input())
for _ in range(T):
    N,M = map(int,input().split())
    # arr = [list(input()) for _ in range(N)]
    arr=[]
    for i in range(N):
        arr.append(list(input()))
    count=0
    # d = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    for i in range(N):
        for j in range(M):
            if(arr[i][j]=='#'):
                DFS(i,j)
                count+=1
    print(count)
