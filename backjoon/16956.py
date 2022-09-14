R,C = map(int,input().split())
arr = []
for i in range(R):
    tmp = input()
    arr.append(tmp)

def check(i,j):
    if(i>0 and arr[i-1][j]=='W'):
        return True
    if(j>0 and arr[i][j-1]=='W'):
        return True
    if(i<R-1 and arr[i+1][j]=='W'):
        return True
    if(j<C-1 and arr[i][j+1]=='W'):
        return True
    return False

for i in range(R):
    for j in range(C):
        if(arr[i][j]=='S'):
            tmp = check(i,j)
            if(tmp):
                print(0)
                exit()
print(1)
for i in range(R):
    print(arr[i])


