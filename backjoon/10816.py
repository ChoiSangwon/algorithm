n=int(input())
arr=list(map(int,input().split()))
m=int(input())
find = list(map(int,input().split()))

# arr.sort()
res={}

for i in arr:
    if i in res:
        res[i]+=1
    else:
        res[i]=1

for i in find:
    if i in res:
        print(res[i],end=" ")
    else:
        print(0,end=" ")

# for i in find:
#     flag=False
#     count=0
#     for j in range(n):
#         if i<arr[j]:
#             break
#         if arr[j]==i and flag==False:
#             flag=True
#             count+=1
#         elif arr[j]==i and flag==True:
#             count+=1
#         elif arr[j]!=i and flag==True:
#             break
#     print(count,end=" ")