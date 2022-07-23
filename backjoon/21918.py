N = list(map(int,input().split()))
arr = list(map(int,input().split()))
for i in range(N[1]):
    a = list(map(int,input().split()))
    if (a[0]==1):
        arr[a[1]-1]=a[2]
    elif(a[0]==2):
        for j in range(a[1]-1,a[2]):
            if(arr[j]==0):
                arr[j]=1
            else:
                arr[j]=0
    elif(a[0]==3):
        for j in range(a[1]-1,a[2]):
            arr[j]=0
    elif(a[0]==4):
        for j in range(a[1]-1,a[2]):
            arr[j]=1
for i in range(N[0]):
    print(arr[i], end=" ")
