import sys
input = sys.stdin.readline

n,k = map(int,input().split())

arr=[]
check=[[0 for _ in range(n)] for _ in range(n)]
for i in range(n):
	arr.append(list(input().split()))

def bomb(i,j):
	d=[(0,1),(1,0),(0,-1),(-1,0)]
	if arr[i][j]=='0':
		check[i][j]+=1
	elif arr[i][j]=='@':
		check[i][j]+=2
	for a,b in d:
		ni=i+a
		nj=j+b
		if 0<=ni<n and 0<=nj<n:
			if arr[ni][nj]=='0':
				check[ni][nj]+=1
			elif arr[ni][nj]=='@':
				check[ni][nj]+=2
	

for _ in range(k):
	i,j = map(int,input().split())
	bomb(i-1,j-1)

res=0
for i in range(n):
	res=max(res,max(check[i]))
print(res)