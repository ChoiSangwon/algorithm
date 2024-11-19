import sys

def InputData():
	readl = sys.stdin.readline
	B, S, D = readl().strip().split()
	return int(B), S, D
# 입력

bb={10: 'A', 11: 'B', 12: 'C', 13: 'D', 14: 'E', 15: 'F',
		16: 'G', 17: 'H', 18: 'I', 19: 'J', 20: 'K', 21: 'L',
		22: 'M', 23: 'N', 24: 'O', 25: 'P', 26: 'Q', 27: 'R',
		28: 'S', 29: 'T', 30: 'U', 31: 'V', 32: 'W', 33: 'X',
		34: 'Y', 35: 'Z'}

def change(a,b):
	rev_base = ''
	minus=False
	if a<0:
		a=-a
		minus=True
	
	while a > 0:
		a, mod = divmod(a, b)
		if mod>9:
			rev_base+=bb[mod]
		else:
			rev_base += str(mod)
	
	if rev_base=='':
		return '0'
	if minus:
		return '-'+rev_base[::-1]
	return rev_base[::-1]
	

# N : 테스트 케이스 수
# B : 진법
# S : 첫 번째 정수
# D : 두 번째 정수
N = int(input())
for _ in range(N):
	B, S, D = InputData()

	print(change(int(S,B)*int(D,B),B))
	# print(int(D,B))

