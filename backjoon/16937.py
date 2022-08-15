H,W= map(int , input().split())
N = int(input())
arr=[]
res=0  
for i in range(N):
    arr.append(list(map(int,input().split())))

for i in range(N):
    for j in range(i+1,N):
        if((arr[i][0]+arr[j][0]<=H and max(arr[i][1],arr[j][1])<=W) or (arr[i][0]+arr[j][0]<=W and max(arr[i][1],arr[j][1])<=H) ): # 가로 가로
            res=max(res,arr[i][0]*arr[i][1]+arr[j][1]*arr[j][0])
        elif(arr[i][0]+arr[j][1]<=H and max(arr[i][1],arr[j][0]) <=W or (arr[i][0]+arr[j][1]<=W and max(arr[i][1],arr[j][0]) <=H)): #가로 세로
            res=max(res,arr[i][0]*arr[i][1]+arr[j][1]*arr[j][0])
        elif(arr[i][1]+arr[j][0]<=W and max(arr[i][0],arr[j][1]) <=H or (arr[i][1]+arr[j][0]<=H and max(arr[i][0],arr[j][1]) <=W)): #세로 가로
            res=max(res,arr[i][1]*arr[i][0]+arr[j][0]*arr[j][1])
        elif(arr[i][1]+arr[j][1]<=W and max(arr[i][0],arr[j][0]) <=H or (arr[i][1]+arr[j][1]<=H and max(arr[i][0],arr[j][0]) <=W)): #세로 세로
            res=max(res,arr[i][1]*arr[i][0]+arr[j][1]*arr[j][0])
print(res)