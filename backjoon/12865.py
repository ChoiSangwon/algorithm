n,k=map(int,input().split())

arr=[[0 for _ in range(k+1)] for _ in range(n+1)]
weight=[]
value=[]

for i in range(n):
    a,b=map(int,input().split())
    weight.append(a)
    value.append(b)

for i in range(1,n+1):
    for j in range(1,k+1):
        if j<weight[i-1]:
            arr[i][j]=arr[i-1][j]
        else:
            arr[i][j]=max(arr[i-1][j],arr[i-1][j-weight[i-1]]+value[i-1])

print(arr[n][k])