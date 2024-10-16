n=int(input())
arr=list(map(int,input().split()))
m=int(input())
find = list(map(int,input().split()))

res={}

for i in arr:
    if i in res:
        res[i]+=1
    else:
        res[i]=1

for i in find:
    if i in res:
        print(res[i],end=" ")
    else:
        print(0,end=" ")