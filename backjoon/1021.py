n, m = map(int, input().split())
arr = list(map(int, input().split()))
cur = 0
res = [i for i in range(1, n+1)]
count = 0

for i in arr:
    if len(res)==1:
        break
    tmp = res.index(i)
    if tmp >= cur:
        count += tmp - cur if tmp - cur < len(res) - tmp + cur else len(res) - tmp + cur
    else:
        count += cur - tmp if cur - tmp < len(res) - cur + tmp else len(res) - cur + tmp
    cur = tmp
    del res[cur]

print(count)