res=[]
while True:
    try:
        res.append(input())
    except EOFError: 
        break
ans={}
for i in res:
    for j in i:
        if j==' ':
            continue
        if j in ans:
            ans[j]+=1
        else:
            ans[j]=1
tmp = max(ans.values())
b=list(ans.items())
b = sorted(ans.items(), key=lambda x: (-x[1], x[0]))
c=''
for i,count in b:
    if count==tmp:
        c+=i
    else:
        break
print(c)
