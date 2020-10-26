for _ in range(int(input())):
    n, k = map(int, input().split())
    barrels = list(map(int, input().split()))
    barrels.sort()
    large = barrels[n-1]
    idx = n - 2
    while k > 0:
        large += barrels[idx]
        idx -= 1
        k -= 1
    print(large)
