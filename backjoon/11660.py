import sys
input=sys.stdin.readline

n,m=map(int,input().split())
arr=[]
arr_sum=[[0 for _ in range(n)] for _ in range(n)]

for i in range(n):
    arr.append(list(map(int,input().split())))
count=0
for i in range(n):
    for j in range(n):
        count+=arr[i][j]
        arr_sum[i][j]=count
for i in range(m):
    a,b,c,d = map(int,input().split())
    count=0
    for i in range(a-1,c):
        count+=arr_sum[i][d-1]-arr_sum[i][b-1]+arr[i][b-1]
    print(count)