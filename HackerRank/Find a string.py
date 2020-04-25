def count_substring(string, sub_string):
    count = 0
    strlen = len(string)
    substrlen = len(sub_string)
    for i in range(strlen - substrlen + 1):
        if string[i: i+substrlen] == sub_string:
            count += 1

    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
