T = int(input())

def solve(arr):
    i = len(arr) - 2
    while i >= 0 and arr[i] >= arr[i + 1]:
        i -= 1
    if i == -1:
        return 
    print(i,arr[i])
    j = len(arr) - 1
    while arr[j] <= arr[i]:
        j -= 1
    print(j,arr[j])
    arr[i], arr[j] = arr[j], arr[i] 

    arr[i + 1:] = reversed(arr[i + 1:])

for _ in range(T):
    arr = list(input())
    solve(arr)
    print("".join(arr))
