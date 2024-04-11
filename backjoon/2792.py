import sys
input=sys.stdin.readline
n,k=map(int,input().split())
arr=[0 for _ in range(k)]

for i in range(k):
    arr[i]=int(input())

left=1
right=max(arr)

def check(a):
    res=0
    for j in arr:
        res+=j//a
        if (j%a!=0):
            res+=1
    return res
          
while left<=right:
    mid=(left+right)//2
    if check(mid)<=n:
        right=mid-1
    else:
        left=mid+1
print(left)