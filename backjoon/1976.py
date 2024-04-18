import sys
input = sys.stdin.readline

n=int(input())
m=int(input())
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

for i in range(1,n+1):
    tmp=[0]
    tmp.extend(list(map(int,input().split())))
    for j in range(1,n+1):
        if i==j:
            continue
        if tmp[j]==1:
            union(i,j)
travel=list(map(int,input().split()))
flag=find(travel[0])
for i in range(1,len(travel)):
    c=find(travel[i])
    if flag!=c:
        print("NO")
        exit()
print("YES")