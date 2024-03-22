n,m=map(int,input().split())
arr = list(map(int,input().split()))
res=set([])
def solve(cur):
    if len(cur)==m:
        res.add(tuple(cur))
        return
    for i in range(n):
        if(len(cur)==0 or (len(cur)!=0 and cur[-1]<=arr[i])):
            cur.append(arr[i])
            solve(cur)
            cur.pop()
solve([])

res=list(res)
res.sort(key=lambda x:tuple(x[i] for i in range(m)))

for a in res:
    a=[str(i) for i in a]
    print(" ".join(a))