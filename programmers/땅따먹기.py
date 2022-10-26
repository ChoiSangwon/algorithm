def solution(land):
    dp =[[0 for _ in range(4)] for _ in range(len(land)+1)]
    for i in range(1,len(land)+1):
        for j in range(4):
            dp[i][j]=land[i-1][j-1]+max(dp[i-1][:j]+dp[i-1][j+1:])
    return max(dp[len(land)])