M,N = map(int,input().split())
arr = []

def cmp(arr1,arr2):
    for i in range(N):
        for j in range(i+1,N):
            if((arr1[j]-arr1[i] >0 and arr2[j]-arr2[i]<=0) or (arr2[j]-arr2[i] >0 and arr1[j]-arr1[i]<=0)):
                return False
    return True
res=0
for i in range(M):
    arr.append(list(map(int,input().split())))
for i in range(M):
    for j in range(i+1,M):
        if(cmp(arr[i],arr[j])):
            res+=1
print(res)   
