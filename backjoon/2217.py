import sys
N = int(input())
arr=[]
for i in range(N):
    arr.append(int(sys.stdin.readline().rstrip()))
b=sorted(arr,reverse=True)
count=0
for i in range(N):
    tmp=b[i]*(i+1)
    if(count<tmp):
        count=tmp
print(count)

# import heapq
# import  sys
# N= int(input())
# arr=[]
# for i in range(N):
#     heapq.heappush(arr,int(sys.stdin.readline().rstrip()))
# res=[]
# count=0
# for i in range(N):

#     tmp=min(res)*(i+1)
#     if(count<tmp):
#         count=tmp
# print(count)
