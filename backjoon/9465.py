T = int(input())
for _ in range(T):
    N = int(input())
    arr = [list(map(int,input().split()))]
    arr.append(list(map(int,input().split())))
    res=[[0 for _ in range(N+1)] for _ in range(2)]
    for i in range(N):
        if(i==0):
            res[0][i+1]=arr[0][i]
            res[1][i+1]=arr[1][i]
            continue
        res[0][i+1]=max(res[1][i]+arr[0][i],res[1][i-1]+arr[0][i])
        res[1][i+1]=max(res[0][i]+arr[1][i],res[0][i-1]+arr[1][i])
    print(max(max(res[0]),max(res[1])))