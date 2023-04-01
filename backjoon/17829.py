n= int(input())
arr=[list(map(int,input().split())) for _ in range(n)]

def solve(a,b,c,d):
    cc=[a,b,c,d]
    return sorted(cc)[2]
    

while(len(arr)>1):
    size=len(arr)
    res=[]
    
    for i in range(0,size,2):
        tmp=[]
        for j in range(0,size,2):
            ddd = solve(arr[i][j],arr[i+1][j],arr[i][j+1],arr[i+1][j+1])
            tmp.append(ddd)
        res.append(tmp)
    arr=res
print(arr[0][0])