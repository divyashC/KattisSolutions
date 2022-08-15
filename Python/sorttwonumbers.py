# https://open.kattis.com/problems/sorttwonumbers

line = input()
a, b = line.split()
a = int(a)
b = int(b)

print(a if a < b else b, a if a > b else b)
