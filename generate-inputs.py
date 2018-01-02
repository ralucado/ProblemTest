#!/usr/bin/python
# -*- coding: latin1 -*-


import random

for i in range(10):
    n = random.randint(1,10000)
    print n, "     ",
    for j in range(n):
        print random.random(), 
    print
