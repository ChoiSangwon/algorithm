n, k = map(int, input().split())

res = 1
for i in range(k):
    res*= n
    n -= 1

div = 1
for i in range(2, k+1):
    div *= i

print(res//div)