import sys
N = int(sys.stdin.readline())
arr=[]
for i in range(N):
    tmp = sys.stdin.readline().split()
    if(tmp[0]=='push'):
        a = (int)(tmp[1])
        arr.append(a)
    elif(tmp[0]=='pop'):
        if(len(arr)>0):
            print(arr.pop())
        else:
            print(-1)
    elif(tmp[0]=='size'):
        print(len(arr))
    elif(tmp[0]=='empty'):
        if(len(arr)==0):
            print(1)
        else:
            print(0)
    elif(tmp[0]=='top'):
        if(len(arr)>0):
            print(arr[-1])
        else:
            print(-1)
