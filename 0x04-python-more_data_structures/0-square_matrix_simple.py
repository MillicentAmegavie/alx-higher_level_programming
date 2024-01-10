#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    result_matrix = matrix.copy()
    for r in range(len(result_matrix)):
        result_matrix[r] = list(map(lambda x: x ** 2, result_matrix[r]))
    return result_matrix

