for cases in range(int(input())):
    n =  int(input())
    string = input()
    for i in range(0, 2 * n -1, 2):
        print(string[i], end='')
    print()
