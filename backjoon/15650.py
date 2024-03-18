N,M = map(int,input().split())
arr = [i for i in range(1,N+1)]
check=[0 for _ in range(N)]

def dfs(cur,count,x):
    if count == M:
        cur=[str(i) for i in cur]
        print(str(" ").join(cur))
    for j in range(x+1,N):
        cur.append(arr[j])
        dfs(cur,count+1,j)
        cur.pop()
    
for i in range(len(arr)):
    dfs([arr[i]],1,i)
