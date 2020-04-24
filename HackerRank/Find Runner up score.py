a = input()
b = input()
list1 = b.split(' ')
score = []

for i in list1:
    score.append(int(i))
mx1 = max(score)
mx2 = -100

for i in score:
    if i < mx1 and i > mx2:
        mx2 = i

print(mx2)
