n,m=map(int,input().split())
arr = [i for i in range(1,n+1)]
def solve(cur):
    if len(cur)==m:
        cur=[str(i) for i in cur]
        print(" ".join(cur))
        return
    for i in range(n):
        if(len(cur)==0 or (len(cur)!=0 and cur[-1]<=arr[i])):
            cur.append(arr[i])
            solve(cur)
            cur.pop()
solve([])