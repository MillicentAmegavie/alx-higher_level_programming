#!/usr/bin/python3
def multiple_returns(sentence):
    if len(sentence) == 0:
        m = len(sentence), None
        return m
    m = len(sentence), sentence[0]
    return m
