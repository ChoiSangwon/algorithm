n=int(input())
dp=[0]*(n+1)
arr=[]

def check(a):
    for i in range(2,int(a**(1/2))+1):
        if(a%i==0):
            return False
    return True

for i in range(2,n+1):
    if check(i):
        arr.append(i)
dp[0]=1
for i in arr:
    for j in range(i,n+1):
        dp[j]=(dp[j]+dp[j-i])%123456789
print(dp[n])