n=int(input())
dp=[[[0,0,0] for _ in range(n+1)]for _ in range(n+1)]
arr=[]
for i in range(n):
    arr.append(list(map(int,input().split())))

# dp[0][0],dp[0][1]=1,1
dp[1][1][0]=1
dp[1][2][0]=1
for i in range(1,n+1):
    for j in range(1,n+1):
        if arr[i-1][j-1]==1:
            continue
        if j==1 or j==2:
            continue
        if i==1:
            dp[i][j][0]=dp[i][j-1][0]
            continue
        dp[i][j][0]=dp[i][j-1][1]+dp[i][j-1][0]
        dp[i][j][2]=dp[i-1][j][1]+dp[i-1][j][2]
        if arr[i-1][j-1]==1 or arr[i-2][j-1]==1 or arr[i-1][j-2]==1:
            continue
        dp[i][j][1]=dp[i-1][j-1][0]+dp[i-1][j-1][1]+dp[i-1][j-1][2]
print(sum(dp[n][n]))