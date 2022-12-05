N,K=map(int,input().split())
arr = list(map(int,input().split()))

res = 10000000000  
cnt=0
l = 0
r = 0
if arr[r] == 1: 
    cnt += 1

while r < N:
    if cnt == K:
        res = min(res, r - l + 1)
        if arr[l] == 1: 
            cnt -= 1
        l += 1
    else:
        r += 1
        if r < N and arr[r] == 1: 
            cnt += 1

if(res==10000000000):
    print(-1)
else:
    print(res)