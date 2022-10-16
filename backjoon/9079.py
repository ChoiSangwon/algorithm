N = int(input())
check = [0 for _ in range(513)]

def solve(res,count):
    if(res==0 or res==511):
        print(count)
        exit()
    if(res>tmp==0)



def cmp(arr):
    for i in range(3):
        for j in range(3):
            if(arr[i][j]!=arr[0][0]):
                return False
    return True


def ToInt(arr):
    tmp= ""
    for i in range(3):
        for j in range(3):
            tmp+=str(arr[i][j])
    return int("0b"+tmp,2)

for i in range(N):
    arr = []
    print(check)
    for j in range(3):
        arr.append([])
        tmp= list(map(str,input().split()))
        for k in tmp:
            if(k=='T'):
                arr[j].append(1)
            else:
                arr[j].append(0)
    count=0
    if(cmp(arr)):
        print(0)
    else:
        solve(arr)
            
    print(ToInt(arr))
            
        
