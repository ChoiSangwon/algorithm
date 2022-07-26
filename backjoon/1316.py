N=int(input())
res=0
for i in range(N):
    check=False
    word=[]
    arr = input()
    for j in range(1,len(arr)):
        if(arr[j] in word):
            check=True
            break
        if(arr[j]!=arr[j-1]):
            word.append(arr[j-1])
        if(arr[j]==arr[j-1]):
            continue
    if(check):
        continue
    res+=1
print(res)