N, L = map(int,input().split())
arr = list(map(int,input().split()))
dp = [arr[i] for i in range(N)]
dp.append(0)
for i in range(len(arr)-1,0,-1):
    dp[i]+=dp[i+1]
    if(arr[i-1]+L<=dp[i]/(N-i) or arr[i-1]-L>=dp[i]/(N-i)):
        print("unstable")
        exit()
print("stable")