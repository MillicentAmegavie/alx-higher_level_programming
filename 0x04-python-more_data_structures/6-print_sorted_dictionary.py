#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    lo = list(a_dictionary.keys())
    lo.sort()
    for m in lo:
        print("{}: {}".format(m, a_dictionary.get(m)))
