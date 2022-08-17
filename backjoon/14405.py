arr = input()
i=0
while i<len(arr):
    if(i+1<len(arr) and arr[i]=='p' and arr[i+1]=='i'):
        i+=2
    elif(i+1<len(arr) and arr[i]=='k'and arr[i+1]=='a'):
        i+=2
    elif(i+2<len(arr) and arr[i]=='c' and arr[i+1]=='h' and arr[i+2]=='u'):
        i+=3
    else:
        print("NO")
        exit()
print("YES")