import math

a = int(input())
b = int(input())

if b < 0 or b == 0 or b == 1:
    print(round(math.log(a), 2))
else:
    print(round(math.log(a, b), 2))
