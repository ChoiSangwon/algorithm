import sys
input = sys.stdin.readline
from collections import deque
N,M,T = map(int,input().split())
d=[(0,1),(1,0),(-1,0),(0,-1)]
arr=[]
q=deque()
for i in range(N):
    arr.append(list(map(int,input().split())))

for _ in range(T):
    # 1. 미세먼지 확산
    # 미세먼지 위치와 양 큐에 넣기
    air=0
    for i in range(N):
        for j in range(M):
            if(arr[i][j]==-1):
                air=i
            if(arr[i][j]!=0 and arr[i][j]!=-1 and arr[i][j]>4):
                q.append((i,j,arr[i][j]))
    # 큐에 있는 미세먼지 확산시키기
    aa=len(q)
    for _ in range(aa):
        i,j,count = q.popleft()
        addCount = count//5
        for a,b in d:
            ci=a+i
            cj=b+j
            if 0<=ci<N and 0<=cj<M and arr[ci][cj]!=-1:
                arr[ci][cj]+=addCount
                arr[i][j]-=addCount

    # 2. 공기청정기 돌리기
    # 공기청정기 윗부분 돌리기
    tmp = air-1
    for i in range(tmp,0,-1):
        if(i==tmp):
            continue
        arr[i][0]=arr[i-1][0]
    for i in range(M-1):
        arr[0][i]=arr[0][i+1]
    for i in range(0,tmp):
        arr[i][M-1]=arr[i+1][M-1]
    for i in range(M-1,0,-1):
        if(i==1):
            arr[tmp][i]=0
            continue
        arr[tmp][i]=arr[tmp][i-1]
    # 공기청정기 아랫부분 돌리기
    tmp = air
    for i in range(tmp,N-1):
        if(i==tmp):
            continue
        arr[i][0]=arr[i+1][0]
    for i in range(1,M):
        arr[N-1][i-1]=arr[N-1][i]
    for i in range(N-1,tmp,-1):
        arr[i][M-1]=arr[i-1][M-1]
    for i in range(M-1,0,-1):
        if(i==1):
            arr[tmp][i]=0
            continue
        arr[tmp][i]=arr[tmp][i-1]
    # print()
    # for i in arr:
    #     print(i)
res=2
for i in arr:
    res+=sum(i)
print(res)