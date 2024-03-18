N,M = map(int,input().split())
check = [0 for _ in range(N)]
arr = list(map(int,input().split()))
arr.sort()

def solve(cur,count):
    if count==M:
        cur = [str(i) for i in cur]
        print(str(" ").join(cur))
    for i in range(N):
        if(check[i]!=0):
            continue
        cur.append(arr[i])
        check[i]=1
        solve(cur,count+1)
        check[i]=0
        cur.pop()

solve([],0)
