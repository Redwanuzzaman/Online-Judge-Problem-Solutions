string = input()
distinct = set()
for i in string:
    distinct.add(i)
print(26 - len(distinct))