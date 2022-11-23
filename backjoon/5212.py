N,M = map(int,input().split())
arr=[]
dp=[]
for i in range(N):
    arr.append(list(input()))
    dp.append(arr[i].copy())

for i in range(N):
    for j in range(M):
        if(arr[i][j]=='.'):
            continue
        count=0
        if i>0 and arr[i-1][j]=='X':
            count+=1
        if j>0 and arr[i][j-1]=='X':
            count+=1
        if i<N-1 and arr[i+1][j]=='X':
            count+=1
        if j<M-1 and arr[i][j+1]=='X':
            count+=1
        if(count<2):
            dp[i][j]='.'
            
a,b,c,d =N,M,0,0
for i in range(N):
    for j in range(M):
        if(dp[i][j]=='X'):
            a=min(i,a)
            b=min(j,b)
            c=max(i,c)
            d=max(j,d)
for i in range(a,c+1):
    for j in range(b,d+1):
        print(dp[i][j],end="")
    print()

