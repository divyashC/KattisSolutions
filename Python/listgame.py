# A list Game
# https://open.kattis.com/problems/listgame

def points(x):
    pointK = 1
    factor = 2
    while (factor*factor <= x):
        if (x % factor == 0):
            x /= factor;
            pointK += 1
        else:
            factor += 1
    return pointK

x = int(input())
print(points(x))