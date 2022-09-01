import sys
N,M = map(int,input().split())
arr1=[]
count =0
for i in range(N):
    arr1.append(sys.stdin.readline().rstrip())
for j in range(M):
    tmp =sys.stdin.readline().rstrip()
    if(tmp in arr1):
        count+=1
print(count)