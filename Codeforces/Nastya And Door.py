for cases in range(int(input())):
    n, height = map(int, input().split())
    arr = list(map(int, input().split()))
    peaks = [0] * n
    for i in range(1, n-1):
        if arr[i - 1] < arr[i] > arr[i + 1]:
            peaks[i] = 1
    idx = 0
    ans = sum(peaks[1:height-1])
    temp = ans
    for i in range(n - height + 1):
        temp -= peaks[i+1]
        temp += peaks[i + height - 1]
        if temp > ans:
            ans = temp
            idx = i + 1
    print(ans+1, idx+1)
