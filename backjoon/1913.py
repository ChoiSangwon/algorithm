N = int(input())
K = int(input())
dp=[[0 for _ in range(N+1)] for _ in range(N+1)]
def solve():
    x=N//2+1
    y=N//2+1
    dp[y][x]=1
    y-=1
    dp[y][x]=2
    count=3
    ban=2
    d=[(0,1),(1,0),(0,-1),(-1,0)]
    while(count<=N*N):
        for i in range(4):
            q,w=d[i]
            for j in range(ban):
                if(i==0 and j==ban-1):
                    break
                y+=q
                x+=w
                dp[y][x]=count
                count+=1
                if(count>N*N):
                    return    
        ban+=2
        y-=1
        dp[y][x]=count
        count+=1
solve()
a,b=0,0
for i in range(1,N+1):
    for j in range(1,N+1):
        if(dp[i][j]==K):
            a=i
            b=j
        print(dp[i][j],end=" ")
    print()
print(a,b)
        