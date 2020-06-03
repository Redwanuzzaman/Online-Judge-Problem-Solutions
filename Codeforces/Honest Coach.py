for i in range(int(input())):
    n = int(input())
    lst = list(map(int, input().split()))
    lst.sort()
    ans = 10000000
    for j in range(1, n):
        ans = min(ans, lst[j] - lst[j-1])
    print(ans)
