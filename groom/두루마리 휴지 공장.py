n,m=map(int,input().split())
arr=list(map(int,input().split()))

maxRes= max(arr)

res=0
for i in arr:
	res+=maxRes-i
	
if res>m:
	print("No way!")
else:
	print(maxRes+(m-res)//n)