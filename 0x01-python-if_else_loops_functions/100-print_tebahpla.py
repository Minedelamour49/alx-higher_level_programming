#!/usr/bin/python3
# 100-print_tebahpla.py

"""Print the alphabet in reverse order alternating upper- and lowercase."""

for c in range(ord('z'), ord('a') - 1, -1):
    print("{}"format(chr(c)), end="")
    if c % 2 == 1:
        c -= 32
