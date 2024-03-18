N,M = map(int,input().split())
arr = [i for i in range(1,N+1)]

def solve(cur,count,x):
    if count == M:
        cur=[str(i) for i in cur]
        print(str(" ").join(cur))
    for j in range(x+1,N):
        cur.append(arr[j])
        solve(cur,count+1,j)
        cur.pop()
    
for i in range(len(arr)):
    solve([arr[i]],1,i)