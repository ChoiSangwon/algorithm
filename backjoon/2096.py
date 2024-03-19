import sys
import copy
input = sys.stdin.readline
n= int(input())
bq=[[0,0],[0,0],[0,0]]
cq=[[0,0],[0,0],[0,0]]
for i in range(n):
    arr=list(map(int,input().split()))
    cq[0][0]=max(bq[0][0],bq[1][0])+arr[0]
    cq[1][0]=max(bq[0][0],bq[1][0],bq[2][0])+arr[1]
    cq[2][0]=max(bq[1][0],bq[2][0])+arr[2]

    cq[0][1]=min(bq[0][1],bq[1][1])+arr[0]
    cq[1][1]=min(bq[0][1],bq[1][1],bq[2][1])+arr[1]
    cq[2][1]=min(bq[1][1],bq[2][1])+arr[2]
    bq=copy.deepcopy(cq)
resMax=0
resMin=100000000
for i in range(3):
    resMax=max(resMax,max(bq[i]))
    resMin=min(resMin,min(bq[i]))
print(resMax,resMin)