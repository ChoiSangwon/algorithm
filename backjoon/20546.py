N=int(input())
arr = list(map(int,input().split()))
# 준현
temp=0
for i in range(14):
    if(arr[i]<=N):
        temp=arr[i]
        break
jun = (N//temp)*arr[13] + N%temp
#성민
res=N
n=0
for i in range(2,13):
    if(arr[i-2]<arr[i-1]<arr[i]):
        res+= n*arr[i]
        n=0
    elif(arr[i-2]>arr[i-1]>arr[i]):
        res-= res//arr[i]*arr[i]
        n+=res//arr[i]


if(jun>res):
    print("BNP")
elif(res>jun):
    print("TIMING")
else:
    print("SAMESAME")
        