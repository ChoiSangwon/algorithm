from functools import cmp_to_key
N= int(input())
arr = list(map(int,input().split()))
arr2 = list(map(int,input().split()))
res=[]
for i in range(N):
    res.append((arr[i],arr2[i]))
def solve(a,b):
    if a[1]<b[1]:
        return -1
    else:
        return 1
res = sorted(res, key=cmp_to_key(solve))
count=0
for i in range(N):
    count+=res[i][0]+res[i][1]*i
print(count)

