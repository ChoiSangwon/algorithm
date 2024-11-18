n,k = map(int,input().split())
arr=[]

for i in range(n):
	arr.append(list(map(int,input().split())))

def check(i,j):
	d=[(0,1),(1,0),(-1,0),(0,-1),(1,1),(-1,-1),(1,-1),(-1,1)]
	ans=0
	for a,b in d:
		ni=a+i
		nj=b+j
		if 0<=ni<n and 0<=nj<n and arr[ni][nj]==1:
			ans+=1
	return ans
	
res=0
for i in range(n):
	for j in range(n):
		if arr[i][j]==0 and check(i,j)==k:
			res+=1
print(res)
				