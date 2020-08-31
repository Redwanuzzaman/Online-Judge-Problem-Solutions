for cases in range(int(input())):
    n = int(input())
    characters = {}
    for strings in range(n):
        string = input()
        for i in string:
            characters[i] = characters.get(i, 0) + 1
    status = True
    for value in characters.values():
        if value % n != 0:
            status = False
            break
    if status:
        print("YES")
    else:
        print("NO")
