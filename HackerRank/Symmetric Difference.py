n = int(input())
s1 = set(map(int, input().split()))
m = int(input())
s2 = set(map(int, input().split()))

l = list(s1.difference(s2))
l2 = list(s2.difference(s1))
l3 = l + l2;
l3.sort()
for i in range (len(l3)):
    print(l3[i])

