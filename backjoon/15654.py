N,M = map(int,input().split())
check = [0 for _ in range(N)]
arr = list(map(int,input().split()))
arr.sort()

def dfs(cur,count):
    if count==M:
        cur = [str(i) for i in cur]
        print(str(" ").join(cur))
    for i in range(N):
        if(check[i]!=0):
            continue
        cur.append(arr[i])
        check[i]=1
        dfs(cur,count+1)
        check[i]=0
        cur.pop()

for i in range(N):
    check[i]=1
    dfs([arr[i]],1)
    check[i]=0
