n=int(input())
arr={}
for i in range(n):
    a,b = map(int,input().split())
    if(b not in arr):
        arr[b]=[]
        arr[b].append(a)
    else:
        arr[b].append(a)
res=0
for i in arr:
    arr[i].sort()
    for j in range(len(arr[i])):
        if(j==0):
            res+=arr[i][j+1]-arr[i][j]
        elif (j==len(arr[i])-1):
            res+=arr[i][j]-arr[i][j-1]
        else:
            if(arr[i][j+1]-arr[i][j]<arr[i][j]-arr[i][j-1]):
                res+=arr[i][j+1]-arr[i][j]
            else:
                res+=arr[i][j]-arr[i][j-1]
print(res)
