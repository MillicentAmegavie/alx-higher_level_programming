#!/usr/bin/python3
def no_c(my_string):
    result = []
    for l in my_string:
        if l != 'c' and l != 'C':
            result.append(l)
    return ''.join(result)
