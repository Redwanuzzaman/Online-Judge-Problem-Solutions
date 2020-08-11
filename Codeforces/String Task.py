def solution(input_string):
    input_string = input_string.lower()

    for letter in input_string:
        if letter in "aeiouy":
            del (letter)
        else:
            print(''.join('.' + letter), end='')


input_string = input()

solution(input_string)


