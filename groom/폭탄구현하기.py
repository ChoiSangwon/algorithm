import sys

input = sys.stdin.readline

n,k=map(int,input().split())

arr=[[0 for _ in range(n)] for _ in range(n)]

def bomb(i,j):
	d=[(0,1),(1,0),(-1,0),(0,-1)]
	arr[i][j]+=1
	for a,b in d:
		ni = a+i
		nj = b+j
		if 0<=ni<n and 0<=nj<n:
			arr[ni][nj]+=1

for _ in range(k):
	i,j =map(int,input().split())
	bomb(i-1,j-1)
res=0
for i in range(n):
	res+=sum(arr[i])
print(res)