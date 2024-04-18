from heapq import heappush,heappop

res=[]
heappush(res,64)
x=int(input())

while res:
    if sum(res)==x:
        print(len(res))
        break
    a=heappop(res)
    b=a//2
    heappush(res,b)
    if sum(res)<x:
        heappush(res,b)