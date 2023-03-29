n = int(input())
arr=[]
for i in range(n):
    arr.append(list(map(int,input().split())))
white=0
blue=0

def divide(a, b, N) :
  global white,blue
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
    white+=1
  else :
    blue+=1

divide(0,0,n)
print(white)
print(blue)