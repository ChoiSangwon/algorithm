import sys
input = sys.stdin.readline

n,m=map(int,input().split())
res={}
for i in range(n):
    a,b=input().rstrip().split()
    res[a]=b
for i in range(m):
    a=input().rstrip()
    print(res[a])