t=int(input())

for _ in range(t):
    p=input()
    n=int(input())
    arr=input()
    if n==0:
        arr=[]
    else:
        arr=arr[1:-1].split(',')
    isReverse=False
    flag=True
    for i in p:
        if i=='R':
            isReverse= not isReverse
        if i=='D':
            if len(arr)==0:
                print('error')
                flag=False
                break
            if isReverse:
                del arr[-1]
            else:
                del arr[0]
    if flag==True:
        if isReverse:
            print("["+",".join(arr[::-1])+"]")
        else:
            print("["+",".join(arr)+"]")
