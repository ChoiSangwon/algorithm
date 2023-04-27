def solve(a):
    for i in range(2,int(a**(1/2))+1):
        if(a%i==0):
            return False
    return True

N,M=map(int,input().split())
for i in range(N,M+1):
    if solve(i):
        print(i)