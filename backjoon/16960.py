N,M = map(int,input().split())
arr = {}
res={i for i in range(1,M+1)}
for i in range(1,N+1):
    tmp = list(map(int,input().split()))
    arr[i]=tmp[1:]
for i in range(1,N+1):
    bbb=set()
    for j in range(1,N+1):
        if(i==j):
            continue
        for k in arr[j]:
            bbb.add(k)
    if(bbb==res):
        print(1)
        exit()
print(0)