def average(array):
    s = set(arr)
    summ = sum(s)/len(s)
    return summ


if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
