n = int(input())
m = int(input())
arr = [[1000000000] * (n + 1) for _ in range(n + 1)]
for i in range(1,n+1):
    arr[i][i]=0
for i in range(m):
    a,b=map(int,input().split())
    arr[a][b]=1
for i in range(1, n + 1):
    for j in range(1, n + 1):
        for k in range(1, n + 1):
            arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k])
for i in range(1,n+1):
    count=0
    for j in range(1,n+1):
        if(arr[i][j]==1000000000 and arr[j][i]==1000000000):
            count+=1
    print(count)