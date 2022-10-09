N,C,W = map(int,input().split())
namu = []
for i in range(N):
    namu.append(int(input()))
res=0
for i in range(1,max(namu)+1):
    curSum=0
    for j in namu:
        a = j//i
        b = j%i
        curRes = a*W*i
        if(a==0):
            continue
        if(b!=0):
            curRes-=a*C
        else:
            curRes-=(a-1)*C
        if(curRes<0):
            continue
        curSum+=curRes
    if(res<curSum):
        res=curSum
print(res)