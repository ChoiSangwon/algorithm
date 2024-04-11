n,m=map(int,input().split())
arr=list(map(int,input().split()))

arr.sort(reverse=True)
left=0
right=arr[0]

def check(n):
    res=0
    for i in range(len(arr)):
        if arr[i]<=n:
            break
        res+=arr[i]-n
    return res

while left<=right:
    mid=(left+right)//2
    tmp=check(mid)
    if tmp<m:
        right=mid-1
    else:
        left=mid+1
print(right)