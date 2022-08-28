import sys
N = int(input())
res = {}
for i in range(N*2-1):
    tmp = sys.stdin.readline()
    if(tmp in res):
        res[tmp]+=1
    else: 
        res[tmp]=1
for i in res.keys():
    if(res[i]%2==1):
        print(i)
        break