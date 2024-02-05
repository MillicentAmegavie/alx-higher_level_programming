#!/usr/bin/python3
# Millicent Amegavie
"""Module check class ans subclass."""


def is_kind_of_class(obj, a_class):
    """
    Returns:
        If obj is an instance or inherited instance of a_class - True.
        Otherwise - False.
    """
    return isinstance(obj, a_class)
