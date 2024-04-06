arr = input()
n = len(arr)
dp= [[False for _ in range(n+1)] for _ in range(n+1)]
answer=1

for i in range(0,n-1):
    if dp[i]==dp[i+1]:
        dp[i][i+1]=True
        answer=2

for i in range(2,n+1):
    for j in range(0,n-i):
        end = j+i-1
        if arr[j]==arr[end] and dp[j+1][end-1]:
            dp[j][end]=True
            answer=i
print(i)