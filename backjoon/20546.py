N=int(input())
arr = list(map(int,input().split()))
# 준현
aa=0
for i in range(14):
    if(arr[i]<=N):
        aa=arr[i]
        break;
jun = (N//aa)*arr[13] + N%aa
#성민
count=1
n=0
res=N
r=0
for i in range(1,14):
    if(arr[i]>arr[i-1] and count>0):
        count+=1
    elif(arr[i]>arr[i-1] and count<0):
        count=0
    elif(arr[i]<arr[i-1] and count>0):
        count=-1
    elif(arr[i]<arr[i-1] and count<0):
        count-=1
    if(count==-3):
        n+=res//arr[i]
        print(i,arr[i])
        res-=arr[i]*(res//arr[i])
        print(res)
    if(count==3):
        #print(i,arr[i])
        res+=n*arr[i]
res += n*arr[13]
print(jun,res)
if(jun>res):
    print("BNP")
elif(res>jun):
    print("TIMING")
else:
    print("SAMESAME")
        