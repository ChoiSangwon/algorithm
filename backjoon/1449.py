N,L = map(int,input().split())
arr = list(map(int,input().split()))
arr=sorted(arr)
count=0
st=arr[0]
for i in range(N):
    if(L<=arr[i]-st):
        count+=1
        st=arr[i]
print(count+1)