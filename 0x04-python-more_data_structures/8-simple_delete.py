#!/usr/bin/python3
"""
Simple delete module
"""


def simple_delete(a_dictionary, key=""):
    """
    Deletes a key in a dictionary
    """
    if key in a_dictionary:
        del a_dictionary[key]
    return a_dictionary
