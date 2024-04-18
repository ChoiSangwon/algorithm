from collections import deque

n=int(input())
k=int(input())
arr=[[0 for _ in range(n)] for _ in range(n)]

for i in range(k):
    a,b=map(int,input().split())
    arr[a-1][b-1]=1
l=int(input())
ll=[]

arr[0][0]=2
q=deque()
q.append((0,0))

def checkV(i,j,v):
    if v==0:
        return [i,j+1]
    elif v==1:
        return [i+1,j]
    elif v==2:
        return [i,j-1]
    else:
        return [i-1,j]

ci=0
cj=0
cv=0 # 방향 오른쪽 : 0, 아래 : 1, 왼쪽 : 2,  위 : 3

count=0

for _ in range(l):
    ll.append(list(input().split()))

ll.append((100,-1))

for a,b in ll:
    a=int(a)-count

    for i in range(1,a+1):
        ci,cj=checkV(ci,cj,cv)
        count+=1
        if ci>=n or ci<0 or cj<0 or cj>=n or arr[ci][cj]==2:
            print(count)
            exit()
        if arr[ci][cj]!=1:
            pi,pj=q.popleft()
            arr[pi][pj]=0
        q.append((ci,cj))
        arr[ci][cj]=2

    if b=='L':
        if cv==0:
            cv=3
        else:
            cv-=1
    else:
        if cv==3:
            cv=0
        else:
            cv+=1

print(count)