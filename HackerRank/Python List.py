queries = int(input())

arr = []
for i in range (queries):
    list1 = list(input().split())

    if list1[0] == 'insert':
        arr.insert(int(list1[1]), int(list1[2]))
    elif list1[0] == 'remove':
        arr.remove(int(list1[1]))
    elif list1[0] == 'append':
        arr.append(int(list1[1]))
    elif list1[0] == 'sort':
        arr.sort()
    elif list1[0] == 'pop':
        arr.pop()
    elif list1[0] == 'reverse':
        arr.reverse()
    elif list1[0] == 'count':
        print(arr.count(int(list1[1])))
    elif list1[0] == 'index':
        print(arr.index(int(list1[1])))
    elif list1[0] == 'print':
        print(arr)
