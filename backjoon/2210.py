arr = []
for i in range(5):
    arr.append(list(map(int,input().split())))
res=[]
def DFS(i,j,count,string):
    string+=str(arr[i][j])
    if(count>5):
        if string not in res:
            res.append(string)
        return
    if(j<4):
        DFS(i,j+1,count+1,string)
    if(j>0):
        DFS(i,j-1,count+1,string)
    if(i<4):
        DFS(i+1,j,count+1,string)
    if(i>0):
        DFS(i-1,j,count+1,string)

for i in range(5):
    resstr=[]
    for j in range(5):
        DFS(i,j,1,"")
print(len(res))