n, r, c = map(int, input().split())
size=2**n
res=0
while size>0:
    tmp=size//2
    if r<tmp and c<tmp:
        pass
    elif r<tmp and c>=tmp:
        res+=tmp*tmp
        c-=tmp
    elif r>=tmp and c<tmp:
        res+=tmp*tmp*2
        r-=tmp
    else:
        res+=tmp*tmp*3
        r-=tmp
        c-=tmp
    size = tmp
print(res)

# import sys
# sys.setrecursionlimit(1000000)
# n,r,c=map(int,input().split())
# # arr=[[0 for _ in range(2**n)]for _ in range(2**n)]

# res=0

# def solve(a,b,count):
#     global res
#     # print(a,b,count)
#     if(count==2):
#         for i in range(a,a+count):
#             for j in range(b,b+count):
#                 if(i==c and j==r):
#                     print(res)
#                     exit()
#                 res+=1
#         return
#     else:
#         size=count//2
#         if(a<=c<a+size and b<=r<b+size):
#             solve(a,b,size)
#         else:
#             res+=size**2
#         if(a+size<=c<a+size*2 and b<=r<=b+size):
#             solve(a+size,b,c+size)
#         else:
#             res+=size**2
#         if(a<=c<a+size and b+size<=r<b+size*2):
#             solve(a,b+size,size)
#         else:
#             res+=size**2
#         if(a+size<=c<a+size*2 and b+size<=r<b+size*2):
#             solve(a+size,b+size,size)
#         else:
#             res+=size**2
# solve(0,0,2**n)