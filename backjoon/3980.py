T = int(input())

def perm(a, count):
    global res
    if a == 11:
        res = max(res, count)
        return
    for i in range(11):
        if check[i] or not stats[a][i]:
            continue
        check[i] = 1    
        perm(a+1, count+stats[a][i])
        check[i] = 0

for _ in range(T):
    stats = [list(map(int, input().split())) for _ in range(11)]
    res = 0
    check = [0 for _ in range(11)]
    perm(0, 0)
    print(res)