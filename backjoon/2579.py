n = int(input())
arr= [0]*(n)
dp = [0]*(n) 
for i in range(n):
    arr[i]=int(input())
if(n==1):
    print(arr[i])
elif(n==2):
    print(sum(arr))
else:
    for i in range(n):
        if i==0:
            dp[i]=arr[i]
            continue
        dp[i]=max(dp[i-3]+arr[i-1]+arr[i],dp[i-2]+arr[i])
    print(dp[-1])
