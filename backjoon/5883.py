n =int(input())

cmp = set()
arr = []
for _ in range(n):
    a = input()
    cmp.add(a)
    arr.append(a)

res = 0

for i in cmp:
    tmp = 0
    tmparr = [x for x in arr if x != i]
    for j in range(1,len(tmparr)):
        if tmparr[j-1] == tmparr[j]:
            tmp += 1
        else:
            res= max(res, tmp)
            tmp = 0
    res = max(res, tmp)
print(res+1)