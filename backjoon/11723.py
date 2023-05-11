import sys
input=sys.stdin.readline

n=int(input().rstrip())
res=[0]*21
for i in range(n):
    arr = list(input().split())
    order=arr[0]
    if(len(arr)>1):
        m=int(arr[1])
        if(order=='add'):
            res[m]=1
        elif(order=='check'):
            if(res[m]==1):
                print(1)
            else:
                print(0)
        elif(order=='remove'):
            res[m]=0
        elif(order=='toggle'):
            if(res[m]==1):
                res[m]=0
            else:
                res[m]=1
    else:
        if(order=='all'):
            res=[1]*21
        elif(order=='empty'):
            res=[0]*21