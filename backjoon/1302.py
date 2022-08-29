from functools import cmp_to_key
import sys
N=int(input())
res={}

def cmpA(a,b):
    if(res[a]<res[b]):
        return 1
    elif (res[a]>res[b]):
        return -1
    else:
        if(a>b):
            return 1
        else:
            return -1

for i in range(N):
    tmp = sys.stdin.readline().rstrip()
    if(tmp in res):
        res[tmp]+=1
    else:
        res[tmp]=1

print(sorted(res,key=cmp_to_key(cmpA))[0])
