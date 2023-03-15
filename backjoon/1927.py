import sys
import heapq
input = sys.stdin.readline
q = []
n=int(input())
for i in range(n):
    tmp= int(input())
    if tmp:
        heapq.heappush(q,tmp)
    else:
        if(len(q)):
            print(heapq.heappop(q))
        else:
            print(0)
