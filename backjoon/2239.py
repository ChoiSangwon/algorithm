arr=[]
def check(ci,cj,num):
    for i in range(9):
        if arr[i][cj]==num:
            return False
        if arr[ci][i]==num:
            return False
    a=ci//3
    b=cj//3
    for i in range(3):
        for j in range(3):
            if arr[i+3*a][j+3*b]==num:
                return False
    return True

def solve():
    for i in range(9):
        for j in range(9):
            if arr[i][j] == 0:
                for num in range(1, 10):
                    if check(i, j, num):
                        arr[i][j] = num
                        if solve():
                            return True
                        arr[i][j] = 0
                return False
    return True

for i in range(9):
    arr.append(list(map(int,input())))

solve()
for i in arr:
    i=[ str(_) for _ in i]
    print("".join(i))