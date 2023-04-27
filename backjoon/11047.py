N,K = map(int,input().split())
arr=[]
count=0
for i in range(N):
    arr.append(int(input()))
for i in range(N-1,-1,-1):
    if(K>=arr[i]):
        count+=K//arr[i]
        K-=(K//arr[i])*arr[i]
print(count)