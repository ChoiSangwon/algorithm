arr = input()

resMax=""
one=0
for i in range(1,len(arr)):
    if(i==1):
        if(arr[i-1]=='K'):
            resMax+='5'
        elif(arr[i-1]=='M'):
            one+=1
    if(arr[i]=='K' and arr[i-1]=='K'):
        resMax+='5'
    elif(arr[i]=='M'):
        one+=1
    elif(arr[i]=='K' and arr[i-1]=='M'):
        resMax+='5'+'0'*one
        one=0
if(one!=0):
    resMax+='1'*one
print(resMax)

resMin=""
one=0
for i in range(len(arr)-1):
    if(arr[i]=='K'):
        resMin+='5'
    elif(arr[i]=='M' and arr[i+1]=='M'):
        one+=1
    elif(arr[i]=='M' and arr[i+1]!='M'):
        resMin+='1'+'0'*one
        one=0
    if(i==len(arr)-2):
        if(arr[i+1]=='M' and one==0):
            resMin+='1'
        elif(arr[i+1]=='M'):
            resMin+='1'+'0'*one
        elif(arr[i+1]=='K'):
            resMin+='5'
print(resMin)

