import sys
N = int(input())
arr = list(map(int,input().split()))
dp=[0 for i in range(N+1)]
for i in range(1,N):
    if(arr[i-1]>arr[i]):
        dp[i]+=1
    dp[i+1]+=dp[i]

Q = int(input())

for i in range(Q):
    a,b = map(int,sys.stdin.readline().split())
    print(dp[b-1]-dp[a-1])