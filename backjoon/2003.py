N,M =map(int,input().split())
arr=list(map(int,input().split()))
count=0
left,right,res=0,0,arr[0]
while left<N:
    if(res==M):
        count+=1
        res-=arr[left]
        left+=1
    elif(res<M and right<N-1):
        right+=1
        res+=arr[right]
    else:
        res-=arr[left]
        left+=1
    
print(count)