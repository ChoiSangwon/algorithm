S,P= map(int,input().split())
arr=list(input())
A,C,G,T = map(int,input().split())
tmp={"A":0,"C":0,"G":0,"T":0}
cur = arr[:P]
res=0

for i in cur:
    tmp[i]+=1
if(tmp['A']>=A and tmp["G"]>=G and tmp['C']>=C and tmp['T']>=T):
    res+=1

for i in range(S-P):
    tmp[arr[i]]-=1
    tmp[arr[i+P]]+=1
    if(tmp['A']>=A and tmp["G"]>=G and tmp['C']>=C and tmp['T']>=T):
        res+=1
print(res)