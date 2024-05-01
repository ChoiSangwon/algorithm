from heapq import heappush, heappop
import sys

input=sys.stdin.readline

N=int(input())
plus=[]
minus=[]

for i in range(N):
    a=int(input())
    if a==0:
        if len(plus)==0 and len(minus)==0:
            print(0)
        elif len(plus)==0:
            print(-heappop(minus))
        elif len(minus)==0:
            print(heappop(plus))
        else:
            if minus[0]>plus[0]:
                print(heappop(plus))
            else:
                print(-heappop(minus)) 
    else:
        if a>0:
            heappush(plus,a)
        else:
            heappush(minus,abs(a))