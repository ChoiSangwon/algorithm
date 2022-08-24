from collections import deque
import sys
N = int(input())
res=deque()
for i in range(N):
    arr = sys.stdin.readline().split()
    if(arr[0]=='push_back'):
        res.append(int(arr[1]))
    elif(arr[0]=='push_front'):
        res.appendleft(int(arr[1]))
    elif(arr[0]=='front'):
        if(len(res)==0):
            print(-1)
        else:
            print(res[0])
    elif(arr[0]=='back'):
        if(len(res)==0):
            print(-1)
        else:
            print(res[-1])
    elif(arr[0]=='size'):
        print(len(res))
    elif(arr[0]=='pop_front'):
        if(len(res)==0):
            print(-1)
        else:
            print(res.popleft())
    elif(arr[0]=='pop_back'):
        if(len(res)==0):
            print(-1)
        else:
            print(res.pop())
    elif(arr[0]=='empty'):
        if(len(res)==0):
            print(1)
        else:
            print(0)
