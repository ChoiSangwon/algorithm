from collections import deque

n= int(input())
arr=[]
check=[]
d=[(0,1),(1,0),(-1,0),(0,-1)]
q=deque()

for i in range(n):
	arr.append(list(map(int,input().split())))
	check.append([0]*n)

res=0

for i in range(n):
	for j in range(n):
		if(arr[i][j]==1 and check[i][j]==0):
			res+=1
			q.append((i,j))
			check[i][j]=1
			while q:
				ci,cj=q.popleft()
				for a,b in d:
					ni=ci+a
					nj=cj+b
					if 0<=ni<n and 0<=nj<n and arr[ni][nj]==1 and check[ni][nj]==0:
						check[ni][nj]=1
						q.append((ni,nj))
			
print(res)