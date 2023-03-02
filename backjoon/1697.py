from collections import deque
N,K =map(int,input().split())
arr=[0]*1000001
arr[N]=1
arr[K]=-1

q=deque()
q.append((N,0))
while q:
    a,b=q.popleft()
    if(a==K):
        print(b)
        exit()
    if(a-1>=0 and arr[a-1]!=1):
        arr[a-1]=1
        q.append((a-1,b+1))
    if(a+1<=100000 and arr[a+1]!=1):
        arr[a+1]=1
        q.append((a+1,b+1))
    if(a*2<=100000 and arr[a*2]!=1):
        arr[a*2]=1
        q.append((a*2,b+1))
