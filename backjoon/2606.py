N = int(input())
M = int(input())
res = {}
check = [0 for i in range(N+1)]

def DFS(a, count):
    print(a,count)
    count+=1
    check[a]=1
    for i in range(len(res[a])):
        if(check[res[a][i]]==0):
            count = DFS(res[a][i],count)
    return count

for i in range(1,N+1):
    res[i]=[]
for i in range(M):
    a,b = map(int,input().split())
    res[a].append(b)
    res[b].append(a)
print(DFS(1,0)-1) 