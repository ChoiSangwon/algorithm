n=int(input())
arr=list(map(int,input().split()))
dp=[0]*(n+1)
for i in range(n):
    tmp=[]
    for j in range(0,i):
        if(arr[i]>arr[j]):
            tmp.append(dp[j])
    if(len(tmp)==0):
        dp[i]=1
    else:
        dp[i]=max(tmp)+1
print(max(dp))