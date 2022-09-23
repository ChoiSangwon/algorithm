from collections import deque
N = int(input())
check = [-1 for i in range(N+1)]
res ={}
for i in range(1,N+1):
    res[i]=[]
a,b = map(int,input().split())

def DFS(h,count):
    if(h==b):
        print(count)
        exit()
    check[h]=1
    for i in range(len(res[h])):
        if(check[res[h][i]]==-1):
            count+=1
            DFS(res[h][i],count)
            count-=1

m = int(input())
for i in range(m):
    x,y=map(int,input().split())
    res[x].append(y)
    res[y].append(x)
DFS(a,0)
print(-1)



# que = deque()
# for i in range(len(res[q])):
#     que.appendleft(res[q][i])
#     check[res[q][i]]=count

# while len(que)!=0:
#     count+=1
#     print(que)
#     w = que.popleft()
    
#     for i in range(len(res[w])):
#         if(check[res[w][i]]==-1):
#             que.append(res[w][i])
#             check[res[w][i]]=w
    


    
