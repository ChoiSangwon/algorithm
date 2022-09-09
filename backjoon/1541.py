N = input()
oper=[]
plus=0
minus=0
for i in range(len(N)):
    if(N[i]=='+'):
        plus+=1
        oper.append(N[i])
    elif(N[i]=='-'):
        minus=0
        oper.append(N[i])
N=N.replace('-','+')
arr=list(map(int,N.split('+')))
k=0
while(plus>0):
    if(oper[k]=='+'):
        plus-=1
        arr[k]+=arr[k+1]
        del oper[k]
        del arr[k+1]
        continue
    k+=1
for i in range(1,len(arr)):
    arr[0]-=arr[i]
print(arr[0])