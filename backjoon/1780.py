n=int(input())
arr=[list(map(int,input().split())) for _ in range(n)]
count=[0,0,0]

def solve(a,b,size):
    tmp=arr[a][b]
    for i in range(a,a+size):
        for j in range(b,b+size):
            if tmp!=arr[i][j]:
                tmpsize=size//3
                for i in range(3):
                    for j in range(3):
                        solve(a+tmpsize*i,b+tmpsize*j,tmpsize)
                return

    count[tmp+1]+=1
solve(0,0,n)
for i in count:
    print(i)