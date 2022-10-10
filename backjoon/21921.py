# 단순 구현 (시간초과))
# X,N = map(int,input().split())
# arr = list(map(int,input().split()))
# res=0
# count=0
# for i in range(0,X-N+1):
#     sum=0
#     for j in range(i,i+N):
#         sum+=arr[j]
#     if(res==sum):
#         count+=1
#     elif(res<sum):
#         res=sum
#         count=1
# if(res==0):
#     print("SAD")
# else:
#     print(res)
#     print(count)
X,N = map(int,input().split())
arr = list(map(int,input().split()))
dp=[0 for _ in range(X+1)]
res=0
count=0
for i in range(X):
    dp[i+1]+=arr[i]+dp[i]
for i in range(X-N+1):
    tmp = dp[i+N]-dp[i]
    if tmp==res:
        count+=1
    elif tmp>res:
        res=tmp
        count=1
if res:
    print(res)
    print(count)
else:
    print("SAD")
