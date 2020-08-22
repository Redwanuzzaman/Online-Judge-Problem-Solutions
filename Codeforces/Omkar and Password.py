for _ in range(int(input())):
    n = int(input())
    numbers = list(map(int, input().split()))
    status = True
    for i in range(n-1):
        if numbers[i] != numbers[i+1]:
            status = False
            break
    if status:
        print(n)
    else:
        print(1)