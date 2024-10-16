import sys
input = sys.stdin.readline

n=int(input())
arr=[]

for i in range(n):
    age,name = input().split()
    age=int(age)
    arr.append((age,name))
arr.sort(key=lambda x : x[0])

for age,name in arr:
    print(age,name)