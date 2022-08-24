#!/usr/bin/python3
for c in reversed(range(ord('A'), ord('Z') + 1)):
    if c % 2 == 0:
        c += 32
    print("{:c}".format(c), end='')
