import sys
def solve(a,b):
    while (b > 0):
        tmp = a
        a = b
        b = tmp%b
    return a

n= int(input())
arr=[]
for i in range(n):
    arr.append(int(sys.stdin.readline()))
gcd = arr[1]-arr[0]
for i in range(1,n):
    gcd= solve(gcd,arr[i]-arr[i-1])
res=0
for i in range(1,n):
    res+=(arr[i]-arr[i-1])//gcd-1
print(res)
