import sys
from collections import deque


def input_data():
	readl = sys.stdin.readline
	N = int(readl())
	map_cost = [
		[0] + list(map(int, readl()[:-1])) + [0] if 1 <= r <= N else [0] * (N + 2)
		for r in range(N + 2)
	]
	return N, map_cost


sol = -2

# 입력받는 부분
N, map_cost = input_data()

# 여기서부터 작성
from collections import deque

q = deque()

INF=10000000000

check=[[float('inf') for _ in range(N+1)] for _ in range(N+1)]

q.append((1,1))
check[1][1]=0

d=[(0,1),(1,0),(0,-1),(-1,0)]

while q:
	i,j = q.popleft()
	for a,b in d:
		ni=a+i
		nj=b+j
		if 1<=ni<=N and 1<=nj<=N and check[ni][nj]>check[i][j]+map_cost[ni][nj]:
			q.append((ni,nj))
			check[ni][nj]=check[i][j]+map_cost[ni][nj]
		
print(check[N][N])

