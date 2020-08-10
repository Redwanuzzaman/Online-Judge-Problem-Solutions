for _ in range(int(input())):
    n = int(input())
    candy = list(map(int, input().split()))
    orange = list(map(int, input().split()))

    min_candy = min(candy)
    min_orange = min(orange)

    ans = 0
    for i in range(n):
        req1 = candy[i] - min_candy
        req2 = orange[i] - min_orange
        ans += max(req1, req2)

    print(ans)
