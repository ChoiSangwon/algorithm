import sys
A,N = map(int,input().split())
arr = list(map(int,input().split()))
dp=[0 for i in range(len(arr)+1)]
arr=sorted(arr)
for i in range(1,len(arr)+1):
    dp[i]+=dp[i-1]+arr[i-1]
for i in range(N):
    a,b = map(int,sys.stdin.readline().split())
    print(dp[b]-dp[a-1])