N = int(input())
arr= [list(map(int,input().split())) for _ in range(N)]
res = list(map(int,input().split()))
realres = [0,0,0,1000000000]

def solve(n,count):
    if(count>1):
        tmp=0
        for k in range(3):
            tmp+=abs(realres[k]//count-res[k])
        if(realres[3]>tmp):
            realres[3]=tmp
    for j in range(n+1,N):
        for i in range(3):
            realres[i]+=arr[j][i]
        if(count<7):
            solve(j,count+1)
        for i in range(3):
            realres[i]-=arr[j][i]
solve(-1,0)
print(realres[3])