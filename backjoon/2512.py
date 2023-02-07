n= int(input())
arr =list(map(int,input().split()))
cnt = int(input())
 
if(sum(arr)<=cnt):
    print(max(arr))
else: 
    res=0
    start = 0
    end = max(arr)
    mid=(start+end)//2
    while(start<=end):
        mid=(start+end)//2  
        tmp=0
        for i in range(n):
            if arr[i]>=mid:
                tmp+=mid
            else:
                tmp+=arr[i]
        if(tmp>cnt):
            end=mid-1
        else:
            start=mid+1
            res=mid
    print(res)