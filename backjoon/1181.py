from functools import cmp_to_key

N = int(input())
arr=[]
def cmpa(a,b):
    if(len(b)>len(a)):
        return -1
    elif(len(a)>len(b)):
        return 1
    else:
        if a>b:
            return 1
        else:
            return -1
for i in range(N):
    tmp = input()
    if(tmp not in arr):
        arr.append(tmp)

b=sorted(arr,key=cmp_to_key(cmpa))
for i in b:
    print(i)