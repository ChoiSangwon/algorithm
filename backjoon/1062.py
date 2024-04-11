n,k=map(int,input().split())
arr=[]
# alphabet=['b','d','e','f','g','h','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
one=set(list("antatica"))
two=set()
res=set()

if k<5:
    print(0)
    exit()

for i in range(n):
    tmp=list(input())
    arr.append(tmp)
    res.update(tmp)

for i in res:
    if i not in one:
        two.add(i)
print(two)
    