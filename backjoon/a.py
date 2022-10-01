import sys
input = sys.stdin.readline

n, k, q, m = map(int, input().split())
k = list(map(int, input().split()))
q = list(map(int, input().split()))
student = [1] * (n+3)

for i in q:
    x = 1
    if (i*x in k):
        continue
    while i*x < n+3:
        if i*x not in k:
            student[i*x] = 0
        x += 1

sum_arr = [0] * (n+3)

for i in range(3, n+3):
    if i == 3:
        sum_arr[i] = student[i]
    else:
        sum_arr[i] = student[i] + sum_arr[i-1]

for _ in range(m):
    s, e = map(int, input().split())
    print(sum_arr[e] - sum_arr[s-1])