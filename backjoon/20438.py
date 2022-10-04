# import sys
# N, K,Q,M =map(int,input().split())
# rate = list(map(int,input().split()))
# arr = list(map(int,input().split()))
# dp = [0 for i in range(N+4)]
# for i in range(len(arr)):
#     if(arr[i] in rate):
#         continue
#     for j in range(arr[i],N+3,arr[i]):
#         if(j not in rate):
#             dp[j]=1
# for i in range(M):
#     a,b = map(int,sys.stdin.readline().split())
#     print((b-a+1)-sum(dp[a:b+1]))
import sys
N, K,Q,M =map(int,input().split())
rate = list(map(int,input().split()))
arr = list(map(int,input().split()))
dp = [0 for i in range(N+3)]
for i in range(len(arr)):
    if(arr[i] in rate):
        continue
    for j in range(arr[i],N+3,arr[i]):
        if(j not in rate):
            dp[j]=1
            print(arr[i],j)
# for i in range(len(dp)):
#     print(i,dp[i])
for i in range(1,N+3):
    dp[i]=dp[i-1]+dp[i]
for i in range(M):
    a,b = map(int,sys.stdin.readline().split())
    print((b-a+1)-(dp[b]-dp[a-1]))

# import sys
# input = sys.stdin.readline

# N, K, Q, M = map(int, input().split())
# sleeps = list(map(int, input().split()))
# attends = set(map(int, input().split()))

# studs = [1 for _ in range(N+3)] # 출석 불리면 0, 안 불리면 1

# for attend in attends:
#     i = 1
#     flag = 0    # 조는 애 뒤인지 아닌지 확인 여부
#     while attend*i <= N+2:
#         if attend*i in sleeps:  # 내가 자고 있는 애라면
#             flag = 1    # 지금부터는 조는 애 뒤야
        
#         if flag == 0:   # 아무 문제 없는 친구들
#             studs[attend*i] = 0

#         i += 1
            
# print(studs)

# studs[:3] = [0 for _ in range(3)]
# for i in range(4, N+3):
#     if studs[i] == 0:
#         print(i, end=" ")
#     studs[i] = studs[i-1] + studs[i]

# print()
# print(studs)

# for _ in range(M):
#     S, E = map(int, input().split())
#     print(studs[E]-studs[S-1])