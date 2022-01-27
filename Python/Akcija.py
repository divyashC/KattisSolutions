# https://open.kattis.com/problems/akcija

n = int(input())
data = []

for i in range(n):
    data.append(int(input()))

data.sort()
amount = 0

grouped = []

for i in range(n):
    grouped.append(data.pop())
    if (len(grouped) == 3):
        amount += sum(grouped) - min(grouped)
        grouped = []

amount += sum(grouped)

print(amount)