import sys
input = sys.stdin.readline

n,m=map(int,input().split())
chk=set(input().rstrip() for _ in range(n))
res=set(input().rstrip() for _ in range(m))
aaa = chk & res
aaa=sorted(aaa)
print(len(aaa))
for i in aaa:
    print(i)