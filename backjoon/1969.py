N,M = map(int,input().split())
arr=[]
res=[[0 for i in range(4)]for j in range(M)]
index=N*M
a=""
for i in range(N):
    arr.append(input())

for i in range(N):
    for j in range(M):
        if(arr[i][j]=='A'):
            res[j][0]+=1
        elif(arr[i][j]=='C'):
            res[j][1]+=1
        elif(arr[i][j]=='G'):
            res[j][2]+=1
        elif(arr[i][j]=='T'):
            res[j][3]+=1
for i in range(M):
    if(res[i].index(max(res[i]))==0):
        index-=max(res[i])
        a+='A'
    elif(res[i].index(max(res[i]))==1):
        index-=max(res[i])
        a+='C'
    elif(res[i].index(max(res[i]))==2):
        index-=max(res[i])
        a+='G'
    elif(res[i].index(max(res[i]))==3):
        index-=max(res[i])
        a+='T'
print(a)
print(index)