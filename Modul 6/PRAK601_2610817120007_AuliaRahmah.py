row, column = map(int, input().split())
number = list(map(int, input().split()))

matriks = []
for i in range(row):
    matriks.append(number[i * column:(i + 1) * column])

for row in matriks:
    print(*row)