N = int(input())
M = int(input())
arr = {}
for i in range(1,N+1):
    arr[i]=[]
for i in range(M):
    a,b=map(int,input().split())
    arr[a].append(b)
    arr[b].append(a)

def DFS(a,count):
    if(a==1):
        return True
    if(count==2):
        return False
    for i in range(len(arr[a])):
        c=DFS(arr[a][i],count+1)
        if(c):
            return True
    return False
    
res=0
for i in range(2,N+1):
    a=DFS(i,0)
    if(a):
        res+=1
print(res)