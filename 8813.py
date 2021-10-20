x = input().split(" ")
a = int(x[0])
b = int(x[1])
c = int(x[2])
surface_area = 2 * (a*b + b*c + a*c)
volume = a * b * c
print(str(surface_area) + " " + str(volume))