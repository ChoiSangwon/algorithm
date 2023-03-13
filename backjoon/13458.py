N=int(input())
arr=list(map(int,input().split()))
B,C=map(int,input().split())
res=0
for i in range(N):
    if(arr[i]<B):
        res+=1
        continue
    else:
        res+=1
        arr[i]-=B
        if(arr[i]%C==0):
            res+=arr[i]//C
        else:
            res+=arr[i]//C+1
print(res)