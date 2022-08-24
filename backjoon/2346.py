N = int(input())
count =0
a = [i for i in range(1,N+1)]
arr = list(map(int,input().split()))
tmp = arr.pop(0)
print(a[count], end=" ")
while arr:
    if(tmp<0):
        count = (count+tmp)%len(arr)
    else:
        count = (count+tmp-1)%len(arr)
    tmp=arr.pop(count)
    print(a.pop(count)+1,end=" ")
