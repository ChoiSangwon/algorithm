N = int(input())
arr= list(map(int,input().split()))
arr.sort()
count=0
tmp=0
if(len(arr)%2==1):
    tmp = arr[-1]
    del arr[-1]
for i in range(1,len(arr)//2+1):
    if(arr[i-1]+arr[-i]>count):
        count=arr[i-1]+arr[-i]
if(tmp>count):
    count=tmp
print(count)