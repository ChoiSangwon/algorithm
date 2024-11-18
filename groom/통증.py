n=int(input())

if n%14==0:
	print(n//14)
elif (n%14)%7==0:
	print(n//14+(n%14)//7)
elif n%7==0:
	print(n//7)
else:
	print(n//14+(n%14)//7+(n%14)%7)
