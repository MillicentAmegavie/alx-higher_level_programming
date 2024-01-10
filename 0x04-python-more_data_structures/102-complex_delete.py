#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    lk = list(a_dictionary.keys())

    for vd in lk:
        if value == a_dictionary.get(vd):
            del a_dictionary[vd]

    return (a_dictionary)
