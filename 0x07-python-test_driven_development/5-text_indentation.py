#!/usr/bin/python3
# Millicent Amegavie
""" Function that prints 2 new lines after ".?:" characters """


def text_indentation(text):
    """ Prints 2 new lines after ".?:" characters

    Args:
        text: input string

    Returns:
        Void

    Raises:
        TypeError: If text is not a string


    """

    if type(text) is not str:
        raise TypeError("text must be a string")

    s = text[:]

    for n in ".?:":
        list_text = s.split(d)
        s = ""
        for m in list_text:
            m = i.strip(" ")
            s = m + n if s is "" else s + "\n\n" + m + n

    print(s[:-3], end="")
