#!/usr/bin/python3
# Millicent Amegavie
"""class MyInt that inherits from int."""


class MyInt(int):
    """Invert int operators == and !=."""
    def __eq__(self, other):
        return int(str(self)) != other

    def __ne__(self, other):
        return int(str(self)) == other
