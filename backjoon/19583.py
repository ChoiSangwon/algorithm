import sys
S,E,Q = map(str,input().split())
start = int(S[:2]+S[-2:])
end = int(E[:2]+E[-2:])
finish =int(Q[:2]+Q[-2:])
ain =set()
count=0
while True:
    a = sys.stdin.readline().rstrip()
    if(a==''):
        break
    time=int(a[:2]+a[3:5])
    name=a[6:]
    if(start>=time):
        ain.add(name)
    elif((time>=end and time<=finish ) and name in ain):
        ain.remove(name)
        count+=1
    elif(time>=finish):
        print(count)
        exit()
print(count)