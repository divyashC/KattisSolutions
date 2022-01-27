# https://open.kattis.com/problems/lineup

n = int(input())
increasing = False
neither = False

name1 = input()
name2 = input()

if (name1 < name2):
    increasing = True

for i in range(n-2):
    name1 = name2
    name2 = input()

    if (name1 > name2 and increasing):
        neither = True
        break
    elif (not increasing and name1 < name2):
        neither = True
        break
    
if (not neither):
    if (increasing):
        print('INCREASING')
    else:
        print('DECREASING')
else:
    print('NEITHER')