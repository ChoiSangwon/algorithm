n = int(input())
arr=[]
for i in range(n):
    arr.append(list(map(int,input().split())))
result = []

def divide(a, b, N) :
  color = arr[a][b]
  for i in range(a, a+N) :
    for j in range(b, b+N) :
      if color != arr[i][j] :
        divide(a, b, N//2)
        divide(a, b+N//2, N//2)
        divide(a+N//2, b, N//2)
        divide(a+N//2, b+N//2, N//2)
        return
  if color == 0 :
    result.append(0)
  else :
    result.append(1)

divide(0,0,n)
print(result.count(0))
print(result.count(1))