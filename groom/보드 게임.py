n=int(input())

if n<3:
	print(1)
	exit(0)

res=[0]
dp=[0 for i in range(n+1)]

dp[0]=dp[1]=dp[2]=1
dp[3]=2

for i in range(3,n+1):
	dp[i]=(dp[i-3]+dp[i-1])%1000000007
print(dp[i])
