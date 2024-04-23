T=int(input())
for _ in range(T):
    n=int(input())
    arr=[0,1,1,1,2,2]
    arr.extend([0 for _ in range(n)])
    for i in range(5,n+1):
        arr[i+1]=arr[i]+arr[i-4]
    print(arr[n])