N = int(input())
count=[]
time=[]
for i in range(N):
    a,tmp = input().split()
    count.append(int(a))
    time.append(int(tmp[:2])*60+int(tmp[3:]))
count.append(0)
time.append(2880)
A1,B1=0,0
wintime=[0,0]
b=[]
for i in range(len(count)):   
    if A1>B1:
        t1 = time[i]
        t2 = b
        wintime[0] += t1-t2
    elif B1>A1:
        t1 = time[i]
        t2 = b
        wintime[1] += t1-t2
    b=time[i]
    if(count[i]==1):
        A1+=1
    elif(count[i]==2):
        B1+=1
for i in range(2):
    print(str((wintime[i]//60)).zfill(2)+":"+str((wintime[i]%60)).zfill(2))