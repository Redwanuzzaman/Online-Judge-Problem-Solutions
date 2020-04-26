def minion_game(string):
    length = len(string)
    stuart = 0
    kevin = 0
    vowel = 'AEIOU'
    for i in range (length):
        if(string[i] in vowel):
            kevin += length - i
        else:
            stuart += length - i

    if stuart > kevin:
        print("Stuart " + str(stuart))
    elif stuart < kevin:
        print("Kevin " + str(kevin))
    else:
        print('Draw')


if __name__ == '__main__':
    s = input()
    minion_game(s)
