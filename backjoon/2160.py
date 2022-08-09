N = int(input())
arr=[]

def check(a,b):
    count=0
    for i in range(5):
        for j in range(7):
            if(a[i][j]!=b[i][j]):
                count+=1
    return count

for i in range(N):
    tmp=[]
    for j in range(5):
        tmp.append(input())
    arr.append(tmp)
res=40
resindex1=0
resindex2=0
for i in range(N):
    for j in range(i+1,N):
        a=check(arr[i],arr[j])
        if(res>a):
            res=a
            resindex1=i
            resindex2=j
print(resindex1+1,resindex2+1)
