import sys
input = sys.stdin.readline

n,m=map(int,input().split())

arr=[0 for _ in range(n+1)]
parent=[i for i in range(n+1)]

def find(a):
    if parent[a]!=a:
        parent[a]=find(parent[a])
    return parent[a]

def union(a,b):
    a=find(a)
    b=find(b)
    if a>b:
        parent[b]=a
    else:
        parent[a]=b

for _ in range(m):
    a,b,c=map(int,input().split())
    if a==0:
        union(b,c)
    else:
        q=find(b)
        w=find(c)
        if q==w:
            print("YES")
        else:
            print("NO")
