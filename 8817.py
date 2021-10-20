x = int(input())
if x == 1:
	print(int("9" * x))
else:
	print(int("9" * x) - int("9" * (x-1)))