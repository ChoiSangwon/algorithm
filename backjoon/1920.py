n = int(input())
arr=list(map(int,input().split()))
m= int(input())
check =list(map(int,input().split()))

arr.sort()

for i in check:
    left = 0
    right= n-1
    flag=False
    while (left<=right):
        mid = (left+right)//2
        if arr[mid]==i:
            flag=True
            break
        elif arr[mid]>i:
            right=mid-1
        else:
            left=mid+1
    if flag:
        print(1)
    else:
        print(0)