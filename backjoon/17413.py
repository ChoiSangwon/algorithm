arr = input()
check = False
res=''
tmp=''
for i in range(len(arr)):
    if(arr[i]=='>'):
        res+=arr[i]
        check=False
        continue
    if(arr[i]=='<'):
        check=True
    if(check):
        res+=arr[i]
        continue
    if(i<len(arr)-1 and arr[i+1]=='<'):
        tmp+=arr[i]
        res+=(tmp[::-1])
        tmp=''
        continue
    if(arr[i]==' '):
        res+=(tmp[::-1]+' ')
        tmp=''
        continue
    if(i==len(arr)-1):
        tmp+=arr[i]
        res+=(tmp[::-1]+' ')
        tmp=''
        continue
    tmp+=arr[i]
print(res)
        
        