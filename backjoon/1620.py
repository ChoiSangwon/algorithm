import sys
N,M = map(int,input().split())
res=[]
num=['1','2','3','4','5','6','7','8','9']
for i in range(1,N+1):
    tmp = sys.stdin.readline().rstrip()
    res.append(tmp)
for i in range(M):
    a = sys.stdin.readline().rstrip()
    if(a[0] in num):
        a=int(a)
        print(res[a-1])
    else:
        print(res.index(a)+1)