import sys
input = sys.stdin.readline

n,m=map(int,input().split())
arr=[]
for i in range(n):
    arr.append(int(input()))
arr.sort()

a=0
b=0
count=10000000000000000
while a<n and b<n:
    if arr[b]-arr[a]>=m:
        if count>arr[b]-arr[a]:
            count=arr[b]-arr[a]
        a+=1
    elif arr[b]-arr[a]<m:
        b+=1
print(count)