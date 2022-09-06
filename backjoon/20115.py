N = int(input())
arr = list(map(int,input().split()))
arr = sorted(arr)
for i in range(N-1):
    arr[-1]+=arr[i]/2
print(arr[-1])