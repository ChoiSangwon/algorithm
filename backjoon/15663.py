import sys
sys.setrecursionlimit(1000000)

N,M = map(int,input().split())
check = [0 for _ in range(N)]
arr = list(map(int,input().split()))
res=set([])
arr.sort()

def solve(cur,count):
    if count==M:
        res.add(tuple(cur))
    for i in range(N):
        if(check[i]!=0):
            continue
        cur.append(arr[i])
        check[i]=1
        solve(cur,count+1)
        check[i]=0
        cur.pop()

solve([],0)
res=list(res)
a=len(res[0])
res.sort(key=lambda x : tuple(x[i] for i in range(a)))
for i in res:
    tmp = tuple(str(j) for j in i)
    print(str(" ").join(tmp))