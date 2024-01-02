#!/usr/bin/python3
def remove_char_at(str, n):
    s = ""
    for m in range(len(str)):
        if m != n:
            s = s + str[m]
    return (s)
