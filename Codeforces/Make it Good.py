for cases in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    i = n - 1
    while i > 0 and arr[i-1] >= arr[i]:
        i -= 1
    while i > 0 and arr[i-1] <= arr[i]:
        i -= 1
    print(i)
