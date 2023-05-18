#!/usr/bin/python3
"""
Only different elements module
"""


def only_diff_elements(set_1, set_2):
    """
    Returns a set of elements present in only one set
    """
    diff_set = set_1.symmetric_difference(set_2)
    return diff_set
