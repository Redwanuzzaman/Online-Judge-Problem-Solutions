row, column = map(int, input().split())

des = '.|.'
counter = int(1)
itr = int(row // 2)
for i in range (itr):
    print((des*counter).center(column, '-'))
    counter += 2

print('WELCOME'.center(column, '-'))

counter = row - 2
for i in range (itr):
    print((des * counter).center(column, '-'))
    counter -= 2
