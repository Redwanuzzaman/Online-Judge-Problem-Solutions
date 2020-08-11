def solution(input_string):
    new_list = input_string.split('+')
    new_list.sort()

    for number in range(len(new_list)):
        if number == len(new_list) - 1:
            print(new_list[number])
        else:
            print(new_list[number] + '+', end='')


input_string = input()

solution(input_string)
