N = int(input())

def solve(n):
    res=n
    while(n>0):
        res+=n%10
        n=n//10
    return res

for i in range(1,N):
    if(solve(i)==N):
        print(i)
        exit()
print(0)