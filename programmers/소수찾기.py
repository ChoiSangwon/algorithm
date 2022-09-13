from itertools import permutations
def solve(a):
    if(a==1 or a==0):
        return False
    count=0
    for i in range(2,a):
        if(a%i==0):
            return False
    return True

def solution(numbers):
    arr =list(map(int,list(numbers)))
    res=[]
    anw=[]
    for i in range(2,len(arr)+1):
        res+=list(permutations(arr,i))
    for i in arr:
        if(solve(i) and i not in anw):
            anw.append(i)
    for i in range(len(res)):
        tmp = int(''.join(str(i) for i in res[i]))
        if(solve(tmp) and tmp not in anw):
            anw.append(tmp)
            
    return len(anw)