N = list(map(int,input().split()))
res=min(N)
while True:
    count=0
    for i in range(5):
        if(res%N[i]==0):
            count+=1
    if(count>=3):
        print(res)
        exit()
    res+=1