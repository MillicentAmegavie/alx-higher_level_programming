#!/usr/bin/python3
# Millicent Amegavie
"""module only sub class of."""


def inherits_from(obj, a_class):
    """
    Returns:
        If obj is an inherited instance of a_class - True.
        Otherwise - False.
    """
    if type(obj) != a_class:
        return issubclass(type(obj), a_class)
    else:
        return False
