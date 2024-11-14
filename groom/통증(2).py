n=int(input())
a,b=map(int,input().split())

INF = 10000000000

dp=[INF]*(n+1)
dp[0]=0

for i in range(1, n+1):
	if i >= a:
		dp[i] = min(dp[i], dp[i - a] + 1)
	if i >= b:
		dp[i] = min(dp[i], dp[i - b] + 1)
	
	
if dp[-1]>=INF:
	print(-1)
else:
	print(dp[-1])
