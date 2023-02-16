n= int(input())
arr = list(map(int,input().split()))
bbb=sorted(arr)
res={}
count=0
res[bbb[0]]=0
for i in range(1,len(bbb)):
    if(bbb[i]==bbb[i-1]):
        res[bbb[i]]=count
        continue
    else:
        count+=1
        res[bbb[i]]=count
for i in arr:
    print(res[i],end=" ")
print()
