"""
A web application  requires users to input username and password to register. Write a program to check the validity of password input by users.like-
1. At least 1 letter between [a-z]
2. At least 1 number between [0-9]
3. At least 1 letter between [A-Z]
4. At least 1 character from [$#@]
5. Minimum length of transaction password: 6
6. Maximum length of transaction password: 12
Your program should accept a sequence of comma separated passwords and will check them according to the above criteria. Passwords that match the criteria are to be printed, each separated by a comma.
Example:
If the following passwords are given as input to the program:
ABd1234@1,a F1#,2w3E*,2We3345
Hints:
In case of input data being supplied to the question, it should be assumed to be a console input.
"""

# Redwan
# Problem 5

import re


def password_validity(passwords):
    valid_password_list = []

    for password in passwords:
        flag = 0
        if len(password) < 6 or len(password) > 12:
            flag = -1
        elif not re.search("[a-z]", password):
            flag = -1
        elif not re.search("[A-Z]", password):
            flag = -1
        elif not re.search("[0-9]", password):
            flag = -1
        elif not re.search("[#@$]", password):
            flag = -1

        if flag == 0:
            valid_password_list.append(password)

    return valid_password_list

passwords = input().split(',')

valid_list = password_validity(passwords)
print(valid_list, sep=", ")
