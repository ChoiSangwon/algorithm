import sys
arr = [0]*10001
n= int(input())

for i in range(n):
    arr[int(sys.stdin.readline())]+=1
for i in range(10000):
    for j in range(arr[i]):
        print(i)
