# Sort of Sorting
#https://open.kattis.com/problems/sortofsorting

def firstTwoChars(x):
    return (x[0]+x[1])

while True:
    x = int(input())
    if x == 0:
        break
    else:
        nameList = []
        for i in range(x):
            nameList.append(input())
        nameList.sort(key = firstTwoChars)
        for names in nameList:
            print(names)