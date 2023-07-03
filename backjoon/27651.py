import itertools
# def solve(arr):
#     n = len(arr)
#     count = 0
    
#     arr_sum = [0] * (n + 1)
#     for i in range(1, n + 1):
#         arr_sum[i] = arr_sum[i - 1] + arr[i - 1]


#     for i in range(1, n - 1):
#         head=arr_sum[i]
#         if(arr_sum[i]>arr_sum[n]//3):
#             break
#         left = i + 1
#         right = n
#         mid=0
#         while left < right:
#             mid = (left + right) // 2
#             chest = arr_sum[mid] - arr_sum[i]
#             bae = arr_sum[n] - arr_sum[mid]
#             if head > bae:
#                 right = mid - 1
#             else:
#                 left = mid + 1
        


#         # chest=arr_sum[left]-head
#         # bae=arr_sum[n]-arr_sum[left]

#         print(head,chest,bae)
#         print("Aa",left,right,mid)
#         a=left
#         left1 = i + 1
#         right1 = n
#         mid=0
#         while left1 < right1:
#             mid = (left1 + right1) // 2
#             chest = arr_sum[mid] - arr_sum[i]
#             bae = arr_sum[n] - arr_sum[mid]
#             if chest > bae:
#                 left1 = mid + 1
#             else:
#                 right1 = mid - 1
        
#         # chest=arr_sum[left1]-head
#         # bae=arr_sum[n]-arr_sum[left1]
#         # chest_sum = arr_sum[left] - head
#         # bae_sum = arr_sum[n] - arr_sum[left]

#         print(head,chest,bae)
#         print("Bb",left1,right1,mid)
#         # print(a,left1)
#         if chest > bae and bae > head:
#             count+=a-left1+1

#     return count

# N = int(input())
# arr = list(map(int, input().split()))

# result = solve(arr)
# print(result)
# def solve(arr):
#     n = len(arr)
#     count = 0
    
#     arr_sum = [0] * (n + 1)
#     for i in range(1, n + 1):
#         arr_sum[i] = arr_sum[i - 1] + arr[i - 1]


#     for i in range(1, n - 1):
#         head = arr_sum[i]
#         if head > arr_sum[n] // 3:
#             break

#         left = i + 1
#         right = n
#         mid = 0
#         while left < right:
#             mid = (left + right) // 2
#             chest = arr_sum[mid] - arr_sum[i]
#             bae = arr_sum[n] - arr_sum[mid]
#             if head > bae:
#                 right = mid
#             else:
#                 left = mid +1
#         print(left,right,mid)
#         left1 = i + 1
#         right1 = n
#         mid = 0
#         # print(arr_sum[4]-arr_sum[2])
#         while left1 < right1:
#             mid = (left1 + right1) // 2
#             chest = arr_sum[mid] - arr_sum[i]
#             bae = arr_sum[n] - arr_sum[mid]
#             if chest > bae:
#                 right1 = mid 
#             else:
#                 left1 = mid + 1
#         print(left1,right1,mid)
#         chest=1
#         if chest > bae and bae > head:
#             count += right - left1

#     return count

# N = int(input())
# arr = list(map(int, input().split()))

# result = solve(arr)
# print(result)

# n = int(input())
# a = list(map(int, input().split()))
# psum = [0] * (n + 1)
# for i in range(n):
#     psum[i + 1] = psum[i] + a[i]

# def q(l, r):
#     if l > r:
#         return 0
#     return psum[r + 1] - psum[l]

# ans = 0
# l = 1
# r = n - 2
# for x in range(n - 2):
#     A = q(0, x)

#     l = max(l, x + 1)
#     while r > 0 and q(r + 1, n - 1) <= A:
#         r -= 1
#     while l < n and q(x + 1, l) <= q(l + 1, n - 1):
#         l += 1
#     ans += max(0, r - l + 1)

# print(ans)
# n = int(input())
# a = list(map(int, input().split()))
# psum = [0] * (n + 1)
# for i in range(n):
#     psum[i + 1] = psum[i] + a[i]

# def q(l, r):
#     if l > r:
#         return 0
#     return psum[r + 1] - psum[l]

# ans = 0
# l = 1
# r = n - 2
# for x in range(n - 2):
#     A = q(0, x)

#     l = max(l, x + 1)
#     while r > 0 and q(r + 1, n - 1) <= A:
#         r -= 1
#     while l < n and q(x + 1, l) <= q(l + 1, n - 1):
#         l += 1
#     ans += max(0, r - l + 1)

# print(ans)

n = int(input())
arr = list(map(int, input().split()))
arr_sum = [0] * (n + 1)
for i in range(n):
    arr_sum[i + 1] = arr_sum[i] + arr[i]
count=0
i=1
j=n-2
for k in range(n-2):
    head = arr_sum[k]
    i=max(i,k+1)
    while j>0 and j+1<=n-1 and arr_sum[n]-arr_sum[j+1]<=head:
        if(j>i):
            break
        j-=1
    while i<n and arr_sum[i+1]-arr_sum[k+1]<=arr_sum[n]-arr_sum[i+1]:
        if(i>j):
            break
        i+=1
    count+=max(0,j-i+1)
print(count)

# n = int(input())
# a = list(map(int, input().split()))
# arr_sum = [0] * (n + 1)

# for i in range(n):
#     arr_sum[i + 1] = arr_sum[i] + a[i]
# print(arr_sum[0])
# ans = 0
# i = 1
# j = n - 2
# for k in range(n - 2):

#     A = arr_sum[k]

#     i = max(i, k + 1)
#     while j > 0 and j+1<=n-1 and arr_sum[n]-arr_sum[j+1] <= A:
#         j -= 1
#     while i < n and k+1<=i and i+1<=n-1 and arr_sum[i+1]-arr_sum[k+1] <= arr_sum[n]-arr_sum[i+1]:
#         i += 1
#     ans += max(0, j - i + 1)

# print(ans)

# n = int(input())
# a = list(map(int, input().split()))

# psum = [0] * (n + 1)
# for i in range(n):
#     psum[i + 1] = psum[i] + a[i]

# ans = 0
# l = 1
# r = n - 2

# for x in range(n - 2):
#     A = psum[x + 1]

#     l = max(l, x + 1)
#     while r > 0 and psum[n-2]-psum[r+1] <= A:
#         r -= 1
#     while l < n and psum[x + 1] <= psum[l + 1] - psum[l]:
#         l += 1
#     ans += max(0, r - l + 1)

# print(ans)