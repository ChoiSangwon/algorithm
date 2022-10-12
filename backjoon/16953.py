from collections import deque
A,B = map(int,input().split())

def BFS(tmp,count):
    if(tmp==B):
        print(count)
        exit()
    if(tmp*2<=B):
        BFS(tmp*2,count+1)
    a = str(tmp)
    a+="1"
    if(int(a)<=B):
        BFS(int(a),count+1)

BFS(A,1)
print(-1)