# Calculating Triange with 3 given lengths

import math

a = float(input())
b = float(input())
c = float(input())
p = (a + b + c) / 2.0
ans = math.sqrt(p * (p - a) * (p - b) * (p - c))
print(ans)
