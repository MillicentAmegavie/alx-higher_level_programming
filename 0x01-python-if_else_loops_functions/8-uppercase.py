#!/usr/bin/python3
def uppercase(str):
    for m in range(len(str)):
        if ord(str[m]) >= 97 and ord(str[m]) <= 122:
            num = 32
        else:
            num = 0
        print("{:c}".format(ord(str[m]) - num), end='')
    print()
