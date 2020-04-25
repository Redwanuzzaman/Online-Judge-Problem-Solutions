def swap_case(s):
    tmp = []
    lis = list(s)

    for i in lis:
        str = ""
        if i.islower():
            str = i.upper()
        elif i.isupper():
            str = i.lower()
        else:
            tmp.append(i)
        tmp.append(str)

    res = ''.join(tmp)
    return res


if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
