arr=[0 for i in range(31)]
for i in range(28):
    arr[int(input())] = 1
for i in range(1,31):
    if (arr[i]==0):
        print(i)