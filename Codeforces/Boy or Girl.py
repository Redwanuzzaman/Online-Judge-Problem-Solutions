def solution(input_string):
    dictionary = {}
    for key in input_string:
        dictionary[key] = dictionary.get(key, 0) + 1

    if len(dictionary) % 2 == 0:
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")


input_string = input()

solution(input_string)
