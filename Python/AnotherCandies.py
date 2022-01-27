# Another Candies
# https://open.kattis.com/problems/anothercandies

t = int(input())

for i in range(t):
    input()
    x = int(input())
    total = 0
    for i in range(x):
        candies = int(input())
        total += candies
    if  (total % x == 0):
        print('YES')
    else:
        print('NO')