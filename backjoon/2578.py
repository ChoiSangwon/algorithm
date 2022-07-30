a=[]
b=[]
res=[[ 0 for i in range(5)] for i in range(5)]

def solve(n):
    bingo=0
    for i in range(5):
        if(n in a[i]):
            res[i][a[i].index(n)]=1
    for i in range(5):
        if(0 not in res[i]):
            bingo+=1
    for i in range(5):
        check=0
        for j in range(5):
            if(0==res[j][i]):
                check+=1
        if(check==0):
            bingo+=1
    if(res[0][0] and res[1][1] and res[2][2] and res[3][3] and res[4][4]):
        bingo+=1
    if(res[0][4] and res[1][3] and res[2][2] and res[3][1] and res[4][0]):
        bingo+=1
    return bingo

for i in range(5):
    a.append(list(map(int, input().split())))
for i in range(5):
    b.append(list(map(int, input().split())))
count=0
for i in range(5):
    for j in range(5):
        count+=1
        c=solve(b[i][j])
        if(c>=3):
            print(count)
            exit()
