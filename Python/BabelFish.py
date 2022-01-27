# Babel Fish
# https://open.kattis.com/problems/babelfish

import sys
data = {}

for i in sys.stdin:
    str = i.strip()
    if ' ' in str:
        english, foreign = str.split()
        data[foreign] = english
    elif str != '':
        if (str in data.keys()):
            print(data[str])
        else:
            print('eh')