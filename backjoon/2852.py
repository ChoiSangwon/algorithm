N = int(input())
arr=[]
for i in range(N):
    a,tmp = input().split()
    arr.append((int(a),int(tmp[:2])*60+int(tmp[3:])))
arr.append((0,2880))
A1,B1=0,0
wintime=[0,0]
b=[]
for i in range(len(arr)):   
    if A1>B1:
        t1 = arr[i][1]
        t2 = b
        wintime[0] += t1-t2
    elif B1>A1:
        t1 = arr[i][1]
        t2 = b
        wintime[1] += t1-t2
    b=arr[i][1]
    if(arr[i][0]==1):
        A1+=1
    elif(arr[i][0]==2):
        B1+=1
for i in range(2):
    print(str((wintime[i]//60)).zfill(2)+":"+str((wintime[i]%60)).zfill(2))