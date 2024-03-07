from itertools import permutations

n,k = map(int,input().split())
arr = list(map(int,input().split()))
a=list(permutations((range(n)),n))

count=0

for i in a:
    health=500
    flag=True
    for j in i:
        health-=k
        health+=arr[j]
        if health<500:
            flag=False
            break
    if(flag):
        count+=1
print(count)