N,K = map(int,input().split())
arr = [i for i in range(1,N+1)]
count=0
print('<',end="")
for i in range(N):
    if(count+K>len(arr)):
        count=(count+K-1)%len(arr)
    else:
        count+=K-1
    if(len(arr)==1):
        print('{0}>'.format(arr[count]),end='')
    else:   
        print('{0}, '.format(arr[count]),end='')
    arr.pop(arr.index(arr[count]))

