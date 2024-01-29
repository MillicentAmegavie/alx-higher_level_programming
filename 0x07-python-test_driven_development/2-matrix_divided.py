#!/usr/bin/python3
# Millicent Amegavie
""" function that divides the numbers of a matrix."""


def matrix_divided(matrix, div):
    """Divide all elements of a matrix.

    Args:
        matrix: A list of lists of ints or floats.
        div: number which divides the matrix.
    Raises:
        TypeError: If the matrix contains non-numbers.
                   If the matrix contains rows of different sizes.
                   If div is not an integer or float.
        ZeroDivisionError: If div is zero.
    Returns:
        A new matrix representing the result of the division.
    """

    if (not isinstance(matrix, list) or matrix == [] or
            not all(isinstance(row, list) for row in matrix) or
            not all((isinstance(el, int) or isinstance(el, float))
                    for el in [num for row in matrix for num in row])):
        raise TypeError("matrix must be a matrix (list of lists) of integers/floats")

    if not all(len(row) == len(matrix[0]) for row in matrix):
        raise TypeError("Each row of the matrix must have the same size")

    if not isinstance(div, int) and not isinstance(div, float):
        raise TypeError("div must be a number")

    if div == 0:
        raise ZeroDivisionError("division by zero")

    return ([list(map(lambda x: round(x / div, 2), row)) for row in matrix])
