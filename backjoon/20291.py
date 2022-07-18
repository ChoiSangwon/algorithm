a = int(input())
arr=[]
res={}
for i in range(a):
    b=input()
    arr.append(str(b.split('.')[1]))
arr=sorted(arr)
for i in arr:
    if(i in res):
        temp=res[i]+1
        res[i]=temp
    else:
        res[i]=1

for i in res:
    print(i,end=" ")
    print(res[i])
