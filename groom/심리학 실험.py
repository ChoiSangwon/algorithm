import sys

def InputData():
	readl = sys.stdin.readline
	N = int(readl())
	A = [int(x) for x in readl().split()]

	return N, A

# 입력
# N: 후보자 수
# A: 기질 값
N, A = InputData()

# 코드를 작성하세요
start=0
end=N-1

res=100000000000
resI=0
resJ=0
while start<end:
	if res>abs(A[start]+A[end]):
		resI=start
		resJ=end
		res=abs(A[start]+A[end])
	if A[end]+A[start]<=0:
		start+=1
	elif A[end]+A[start]>0:
		end-=1

print(resI,resJ)

