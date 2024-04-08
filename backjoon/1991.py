n= int(input())
res={}
pre=''
inord=''
post=''

def check(a):
    global pre,inord,post
    l,r=res[a]
    pre+=a
    if l!='.':
        check(l)
    inord+=a
    if r!='.':
        check(r)
    post+=a

for i in range(n):
    a,b,c=input().split()
    res[a]=[b,c]
check('A')

print(pre)
print(inord)
print(post)