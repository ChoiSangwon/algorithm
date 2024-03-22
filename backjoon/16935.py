def one(arr):
    arr.reverse()
    return arr
def two(arr):
    tmp=[[0 for _ in range(m)] for _ in range(n)]
    for i in range(n):
        for j in range(m):
            tmp[i][j]=arr[i][m-j-1]
    return tmp
def three(arr):
    cur=[]
    for j in range(m):
        tmp=[]
        for i in range(n-1,-1,-1):
            tmp.append(arr[i][j])
        cur.append(tmp)
    return cur
def four(arr):
    cur=[]
    for j in range(m-1,-1,-1):
        tmp=[]
        for i in range(n):
            tmp.append(arr[i][j])
        cur.append(tmp)
    return cur

def five(arr1,arr2,arr3,arr4):
    res=[]
    for i in range(n):
        tmp=[]
        for j in range(m):
            if i<divN and j < divM:
                tmp.append(arr3[i][j])
            elif i<divN and j>=divM:
                tmp.append(arr1[i][j-divM])
            elif i>=divN and j<divM:
                tmp.append(arr4[i-divN][j])
            else:
                tmp.append(arr2[i-divN][j-divM])
        res.append(tmp)
    return res

def six(arr1,arr2,arr3,arr4):
    res=[]
    for i in range(n):
        tmp=[]
        for j in range(m):
            if i<divN and j < divM:
                tmp.append(arr2[i][j])
            elif i<divN and j>=divM:
                tmp.append(arr4[i][j-divM])
            elif i>=divN and j<divM:
                tmp.append(arr1[i-divN][j])
            else:
                tmp.append(arr3[i-divN][j-divM])
        res.append(tmp)
    return res


n,m,r = map(int,input().split())
arr=[]
for i in range(n):
    arr.append(list(map(int,input().split())))
operation=list(map(int,input().split()))


for o in operation:
    if o==1:
        arr=one(arr)
    elif o==2:
        arr=two(arr)
    elif o==3:
        arr=three(arr)
        n,m=m,n
    elif o==4:
        arr=four(arr)
        n,m=m,n
    else:
        divN = n//2
        divM = m//2
        arr1,arr2,arr3,arr4=[],[],[],[]
        for i in range(divN):
            tmp=[]
            for j in range(divM):
                tmp.append(arr[i][j])
            arr1.append(tmp)
        for i in range(divN):
            tmp=[]
            for j in range(divM,m):
                tmp.append(arr[i][j])
            arr2.append(tmp)
        for i in range(divN,n):
            tmp=[]
            for j in range(divM):
                tmp.append(arr[i][j])
            arr3.append(tmp)
        for i in range(divN,n):
            tmp=[]
            for j in range(divM,m):
                tmp.append(arr[i][j])
            arr4.append(tmp)
        if o==5:
            arr=five(arr1,arr2,arr3,arr4)
        else:
            arr=six(arr1,arr2,arr3,arr4)
for i in arr:
    i=[str(a) for a in i]
    print(" ".join(i))
