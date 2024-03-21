n,s=map(int,input().split())
arr = list(map(int,input().split()))
arr.append(0) # 조건 하나더 만들기 귀찮으니

INF=1000000000
a=0
b=0
count=arr[0] #부분합
res=INF #길이
while a<n and b<n:
    if(count>=s):
        if res>b-a:
            res=b-a
        count-=arr[a]
        a+=1
    elif count<s:
        b+=1
        count+=arr[b]
if res==INF:
    print(0)
else:    
    print(res+1)