A,B,C,N = map(int,input().split())
res=0
p=0
for i in range(24):
    if(p+A<=N):
        res+=B
        p+=A
    else:
        p-=C
        if(p<0):
            p=0
print(res)