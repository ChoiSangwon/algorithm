from itertools import combinations
while True:
    a= list(map(int,input().split()))
    if (0 in a):
        break
    arr=list(combinations(sorted(a[1:]),6))
    for i in arr:
        for j in i:
            print(j,end=" ")
        print()
    print()