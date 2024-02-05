#!/usr/bin/python3
# Millicent Amegavie
"""class MyList that inherits from list."""


class MyList(list):
    """inherits from list."""
    def print_sorted(self):
        """prints the list, but sorted in ascending sort."""
        print(sorted(self))
