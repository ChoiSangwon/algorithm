import heapq
import sys
N = int(input())
arr=[]
for i in range(N):
    tmp = int(sys.stdin.readline().rstrip())
    if(tmp==0):
        if(len(arr)==0):
            print(0)
        else:
            c = -heapq.heappop(arr)
            print(c)
    else:
        heapq.heappush(arr,-tmp)
    
