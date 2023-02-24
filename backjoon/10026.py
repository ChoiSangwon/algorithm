from collections import deque
import sys
sys.setrecursionlimit(1000000)
n=int(input())
check=[[0 for i in range(n)]for i in range(n)]
check1=[[0 for i in range(n)]for i in range(n)]
d=[(0,1),(0,-1),(1,0),(-1,0)]
arr = []
for i in range(n):
    arr.append(list(input()))

def normal(a,b,n):
    check[a][b]=1
    for i in range(4):
        y=a+d[i][0]
        x=b+d[i][1]
        if(0<=x<n and 0<=y<n and check[y][x]==0 and arr[a][b]==arr[y][x]):
            normal(y,x,n)

def unNormal(a,b,n):
    check1[a][b]=1
    if(arr[a][b]=='R' or arr[a][b]=='G'):
        for i in range(4):
            y=a+d[i][0]
            x=b+d[i][1]
            if(0<=x<n and 0<=y<n and check1[y][x]==0 and (arr[y][x]=='G' or arr[y][x]=='R')):
                unNormal(y,x,n)
    else: 
        for i in range(4):
            y=a+d[i][0]
            x=b+d[i][1]
            if(0<=x<n and 0<=y<n and check1[y][x]==0 and arr[a][b]==arr[y][x]):
                unNormal(y,x,n)


normalCount=0
unNormalCount=0
for i in range(n):
    for j in range(n):
        if(check[i][j]==0):
            normal(i,j,n)
            normalCount+=1
        if(check1[i][j]==0):
            unNormal(i,j,n)
            unNormalCount+=1
print(normalCount,unNormalCount)