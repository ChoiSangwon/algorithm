R,C,K=map(int,input().split())
check=[[0 for _ in range(C)]for _ in range(R)]
arr=[]
for i in range(R):
    arr.append(list(input()))

d=[(0,1),(1,0),(-1,0),(0,-1)]
res=0
check[R-1][0]=1

def dfs(x,y,count):
    global res
    if(x==0 and y==C-1):
        if(count==K):
            res+=1
        return
    for i,j in d:
        cx = i+x
        cy = j+y
        if(0<=cx<R and 0<=cy<C and check[cx][cy]==0 and count<K and arr[cx][cy]!='T'):
            check[cx][cy]=1
            dfs(cx,cy,count+1)
            check[cx][cy]=0
dfs(R-1,0,1)
print(res)