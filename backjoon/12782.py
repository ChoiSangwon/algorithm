N= int(input())
for i in range(N):
    a,b = input().split()
    a1=0
    a2=0
    for j in range(len(a)):
        if(a[j]!=b[j]):
            if(b[j]=='1'):
                a1 += 1
            else:
                a2 += 1
    print(max(a1,a2))