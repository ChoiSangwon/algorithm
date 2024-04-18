n,m=map(int,input().split())
arr=[]
for i in range(n):
    arr.append(list(input()))

def checkWB(a,b):
    one=0
    two=0
    for i in range(8):
        for j in range(8):
            if i%2==0 and j%2==0 and arr[i+a][j+b]!='W':
                one+=1
            elif i%2==0 and j%2==1 and arr[i+a][j+b]!='B':
                one+=1
            elif i%2==1 and j%2==0 and arr[i+a][j+b]!='B':
                one+=1
            elif i%2==1 and j%2==1 and arr[i+a][j+b]!='W':
                one+=1
    for i in range(8):
        for j in range(8):
            if i%2==0 and j%2==0 and arr[i+a][j+b]!='B':
                two+=1
            elif i%2==0 and j%2==1 and arr[i+a][j+b]!='W':
                two+=1
            elif i%2==1 and j%2==0 and arr[i+a][j+b]!='W':
                two+=1
            elif i%2==1 and j%2==1 and arr[i+a][j+b]!='B':
                two+=1
    return [one,two]

answer=64
for i in range(n-7):
    for j in range(m-7):
        black,white=checkWB(i,j)
        answer=min(answer,black,white)
print(answer)
