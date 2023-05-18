#!/usr/bin/python3
"""
Unique addition module
"""


def uniq_add(my_list=[]):
    """
    Adds all unique integers in a list
    """
    unique_nums = set(my_list)
    result = sum(unique_nums)
    return result
