import sys
sys.setrecursionlimit(1000000000)

n,m=map(int,input().split())

arr=[[] for _ in range(n+1)]
check=[0]*(n+1)

for i in range(m):
	a,b=map(int,input().split())
	arr[a].append(b)
	
def dfs(n):
	check[n]=1
	for i in arr[n]:
		if(check[i]==0 and n in arr[i]):
			dfs(i)

res=0
for i in range(1,n+1):
	if check[i]==0:
		dfs(i)
		res+=1
	
print(res)
