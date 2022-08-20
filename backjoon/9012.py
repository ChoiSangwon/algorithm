N = int(input())
for i in range(N):
    arr = input()
    check=0
    n=False
    for j in range(len(arr)):
        if(arr[j]=='('):
            check+=1
        if(arr[j]==')'):
            if(check<1):
                print('NO')
                n=True
                break
            check-=1
    if(n):
        continue
    if(check!=0):
        print("NO")
    else:
        print("YES")