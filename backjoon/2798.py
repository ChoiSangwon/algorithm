N,M = map(int ,input().split())
arr = list(map(int,input().split()))
max=0
for i in range(len(arr)):
    for j in range(i+1,len(arr)):
        for k in range(j+1,len(arr)):
            if(arr[i]+arr[j]+arr[k]<=M and max<arr[i]+arr[j]+arr[k]):
                max=arr[i]+arr[j]+arr[k]
print(max)