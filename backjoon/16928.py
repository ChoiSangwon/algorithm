from collections import deque

INF = 1000000000

arr=[ INF for _ in range(101)]
q=deque()
snake={}
ladder={}
n,m=map(int,input().split())

for i in range(n):
    a,b=map(int,input().split())
    ladder[a]=b
for i in range(m):
    a,b=map(int,input().split())
    snake[a]=b

q.append((1,0))

while q:
    n,count=q.popleft()
    if n==100:
        print(count)
        exit()
    for i in range(1,7):
        if n+i>100:
            continue
        if n+i in snake:
            if arr[snake[n+i]] > count:
                q.append((snake[n+i],count+1))
        elif n+i in ladder:
            if arr[ladder[n+i]] > count:
                q.append((ladder[n+i],count+1))
        else:
            if(arr[n+i]>count+1):
                arr[n+i]=count+1
                q.append((n+i,count+1))