#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
if (n % 3 == 0 and n % 2 != 0):
        print("Weird")
elif (n < 5 and n >= 2):
        print("Not Weird")
elif (n >= 6 and n <= 20):
        print("Weird")
elif (n > 20 and n % 2 == 0):
        print("Not Weird")
else:
   print("Weird")       #hackerrank2
