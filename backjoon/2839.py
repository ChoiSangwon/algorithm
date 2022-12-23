N = int(input())
arr = [10000000000]*(N+1)
for i in range(1,N+1):
    if(i%5==0):
        arr[i]=i//5
    elif(i%3==0):
        arr[i]=i//3
    if(i>5):
        if(arr[i-5]+1<arr[i]):
            arr[i]=arr[i-5]+1
        if(arr[i-3]+1<arr[i]):
            arr[i]=arr[i-3]+1
if(arr[N]==10000000000):
    print(-1)
else:
    print(arr[N])
