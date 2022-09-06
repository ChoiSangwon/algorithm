N = int(input())
arr = list(map(int,input().split()))
arr2 = list(map(int,input().split()))
res=0
count = arr2[0]
for i in range(N-1):
    if(count>arr2[i]):
        count=arr2[i]
    res+=arr[i]*count
print(res)