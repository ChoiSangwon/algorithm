import sys
from itertools import permutations
input = sys.stdin.readline

N=int(input())
K=int(input())
arr=[]
for i in range(N):
    arr.append(input().rstrip())
res=list(permutations(arr,K))
d=[]
for i in res:
    tmp="".join(i)
    if(tmp in d):
        continue
    d.append(tmp)
print(len(d))
