N, K = map(int,input().split())
arr=[]
for i in range(N):
    arr.append(int(input()))
start=0
end=max(arr)
while start <= end:
    mid = (start + end) // 2
    res=0
    if(mid==0):
        break
    for i in arr:
        res+=i//mid
    if res >= K:
        start = mid + 1
    else:
        end = mid -1
print(end)