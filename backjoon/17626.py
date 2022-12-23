N = int(input())
dp = [0]*(N+1)
dp[1]=1

for i in range(2, N+1):
    count = 100000000
    for j in range(1, int(i**(1/2)) + 1):
        count = min(count, dp[i - j**2])
    dp[i]=count+1
print(dp[N])