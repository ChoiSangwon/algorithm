S,K = map(int,input().split())
arr = [S//K for _ in range(K)]
for i in range(S%K):
    arr[-1-i]+=1
res=1
for i in arr:
    res*=i
print(res)