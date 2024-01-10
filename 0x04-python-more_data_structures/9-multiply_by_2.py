#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    nd = a_dictionary.copy()
    lk = list(nd.keys())

    for m in lk:
        nd[m] *= 2

    return (nd)
