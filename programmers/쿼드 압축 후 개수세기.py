def countZeroOne(arr):
    res=[0,0]
    def solve(arr):
        for i in arr:
            if isinstance(i,list):
                solve(i)
            else:
                res[i]+=1
    solve(arr)
    return res

def quardArr(arr):
    if len(arr)==1:
        return arr[0][0]
    arr1,arr2,arr3,arr4=[],[],[],[]
    for i in range(len(arr)//2):
        tmp1,tmp2,tmp3,tmp4=[],[],[],[]
        for j in range(len(arr)//2):
            tmp1.append(arr[i][j]) 
            tmp2.append(arr[i+len(arr)//2][j])
            tmp3.append(arr[i][j+len(arr)//2])
            tmp4.append(arr[i+len(arr)//2][j+len(arr)//2])
        arr1.append(tmp1)
        arr2.append(tmp2)
        arr3.append(tmp3)
        arr4.append(tmp4)
    result = []
    for part in [arr1, arr2, arr3, arr4]:
        counted = countArr(part)
        if isinstance(counted, list):  
            result.append(quardArr(counted))
        else:  
            result.append(counted)
    return result

def countArr(arr):
    if len(arr)==1:
        return arr[0][0]
    check=arr[0][0]
    for i in range(len(arr)):
        for j in range(len(arr[0])):
            if check!=arr[i][j]:
                return arr
    return check

def solution(arr):
    if len(arr)==1:
        if arr[0][0]==1:
            return [0,1]
        else:
            return [1,0]
    a=quardArr(arr)
    b=countZeroOne(a)
    if b[0]==0:
        return [0,1]
    elif b[1]==0:
        return [1,0]
    else:
        return b