N = int(input())
res=666
count=0
while True:
    if( "666" in  str(res)):
        count+=1
    if(count==N):
        print(res)
        exit()
    res+=1
