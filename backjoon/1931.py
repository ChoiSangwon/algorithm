import sys
input = sys.stdin.readline
n=int(input())
arr=[]
for _ in range(n):
    arr.append(list(map(int,input().split())))
arr.sort(key=lambda x : (x[1],x[0]))
count=1
check=arr[0][1]
for i in range(1,n):
    if arr[i][0]>=check:
        check=arr[i][1]
        count+=1
print(count)