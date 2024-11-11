n=int(input())
size=list(map(int,input().split()))
t,p=map(int,input().split())

res1=0
for i in size:
    if(i%t==0):
        res1+=i//t
    else:
        res1+=(i//t)+1
res2=n//p
res3=n%p

print(res1)
print(res2,res3)