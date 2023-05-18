#!/usr/bin/python3
"""
Multiply list map module
"""


def multiply_list_map(my_list=[], number=0):
    """
    Returns a new list with each value multiplied by the given number
    """
    return list(map(lambda x: x * number, my_list))
