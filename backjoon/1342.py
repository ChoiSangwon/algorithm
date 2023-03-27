from itertools import permutations

s=input()
arr = list(permutations(s,len(s)))
res=0
check=[]
# print(len(arr))
count=0
for i in arr:
    if("".join(i) in check):
        continue
    check.append("".join(i))
    flag = True
    for j in range(1,len(i)):
        if i[j]==i[j-1]:
            flag = False
            break
    if flag:
        res+=1
    count+=1

print(res)