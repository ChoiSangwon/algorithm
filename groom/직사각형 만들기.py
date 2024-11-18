from heapq import heappush,heappop

n=int(input())
arr=list(map(int,input().split()))

check={}
res=[]
for i in range(n):
	if arr[i] in check:
		heappush(res,-arr[i])
		del check[arr[i]]
	else:
		check[arr[i]]=1

lenRes=len(res)
if lenRes%2==1:
	lenRes-=1
r=0
for i in range(0,lenRes,2):
	r+=-heappop(res)*-heappop(res)
print(r)
