n=(int(input()))
res=list(input())
arr=['R']*(n+1)

count={"R":0,"B":0}
count[res[0]]+=1
for i in range(1,n):
    if(res[i]!=res[i-1]):
        count[res[i]]+=1
print(min(count.values())+1)