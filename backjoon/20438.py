# import sys
# N, K,Q,M =map(int,input().split())
# rate = list(map(int,input().split()))
# arr = list(map(int,input().split()))
# dp = [0 for i in range(N+4)]
# for i in range(len(arr)):
#     if(arr[i] in rate):
#         continue
#     for j in range(arr[i],N+3,arr[i]):
#         if(j not in rate):
#             dp[j]=1
# for i in range(M):
#     a,b = map(int,sys.stdin.readline().split())
#     print((b-a+1)-sum(dp[a:b+1]))
import sys
N, K,Q,M =map(int,input().split())
rate = list(map(int,input().split()))
arr = list(map(int,input().split()))
dp = [0 for i in range(N+3)]
for i in range(len(arr)):
    if(arr[i] in rate):
        continue
    for j in range(arr[i],N+3,arr[i]):
        if(j not in rate):
            dp[j]=1
print(dp)
for i in range(1,N+3):
    dp[i]=dp[i-1]+dp[i]
for i in range(M):
    a,b = map(int,sys.stdin.readline().split())
    print((b-a+1)-(dp[b]-dp[a-1]))