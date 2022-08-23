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

# s = input()
# cnt = 0
# i = 0

# while i < len(s):
#     if s[i] == 'p' and i+1 < len(s) and s[i+1]=='i':
#         i += 2
#     elif s[i] == 'k' and i+1 < len(s) and s[i+1]=='a':
#         i += 2
#     elif s[i] == 'c' and i+2 < len(s) and s[i+1]=='h' and s[i+2]=='u':
#         i += 3
#     else:
#         cnt = 1
#         break

# if cnt == 0:
#     print('YES')
# else:
#     print('NO')