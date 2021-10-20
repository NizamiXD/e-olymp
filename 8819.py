x = int(input())
if x == 1:
	print('4')
else:
	print((int("9" * x) - int("9" * (x-1)))//2 - 1)