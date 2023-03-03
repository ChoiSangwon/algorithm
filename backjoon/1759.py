L,C = map(int,input().split())
arr= sorted(list(map(str,input().split())))
d=['a','e','i','o','u']
res=[]
def DFS(t,count):
    global res
    if(count==L):
        M=0
        J=0
        for i in res:
            if i in d:
                M+=1
            else:
                J+=1
        if(M>=1 and J>=2):
            print("".join(res))

        return
    
    for i in range(t,C):
        res.append(arr[i])
        DFS(i+1,count+1)
        res.pop()

DFS(0,0)