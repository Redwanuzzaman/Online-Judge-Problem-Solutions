import math

for cases in range(int(input())):
    n, m = map(int, input().split())
    print(math.ceil((abs(n - m))/10))
