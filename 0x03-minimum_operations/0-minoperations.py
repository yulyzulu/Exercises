#!/usr/bin/python3
"""Calculates minimum operations copy paste"""


def minOperations(n):

    x = 1
    a = 0
    y = x
    if n < 2 or type(n) != int:
        return 0
    else:
        for i in range(n):
            if x < n:
                if n % x == 0:
                    y = x
                    x = x + y
                    a = a + 2
                else:
                    x = x + y
                    a = a + 1
            if x == n:
                return a
