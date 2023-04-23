
N=int(input())
arr=[]
for i in range(N):
    arr.append(int(input()))
count=0
for i in range(N-1):
    if(arr[i]>=arr[i+1]):
        count+=arr[i]-(arr[i+1]-1)
print(count)
