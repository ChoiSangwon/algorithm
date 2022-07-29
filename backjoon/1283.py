def printarr(arr,n,count):
    check=False
    count1=0
    if(count==-1):
        for i in range(len(arr)):
            if(arr[i]==n and not check):
                print('[',end="")
                print(arr[i],end="")
                print(']',end="")
                check=True
                continue
            print(arr[i],end="")
    else:
        for i in range(len(arr)):
            if(arr[i]==' '):
                count1+=1
            if(arr[i]==n and not check and count==count1):
                print('[',end="")
                print(arr[i],end="")
                print(']',end="")
                check=True
                continue
            print(arr[i],end="")
    print("")
    
N = int(input())
word=[]
for i in range(N):
    check=False
    arr=input()
    arr2=arr.split(" ")
    count=0
    for i in arr2:
        if(i[0].lower() not in word and i[0].upper() not in word):
            word.append(i[0])
            printarr(arr,i[0],count)
            check=True
            break
        count+=1
    if(check):
        continue
    count=-1
    for i in arr:
        if(i!=' ' and i.upper() not in word and i.lower() not in word):
            word.append(i)
            printarr(arr,i,count)
            check=True
            break
    if(check):
        continue
    printarr(arr,'0',-1)
