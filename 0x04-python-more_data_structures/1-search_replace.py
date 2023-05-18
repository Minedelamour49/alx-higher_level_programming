#!/usr/bin/python3
"""
Search and replace module
"""


def search_replace(my_list, search, replace):
    """
    Replaces all occurrences of an element with another in a new list
    """
    new_list = [x if x != search else replace for x in my_list]
    return new_list
