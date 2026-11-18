n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    row1 = list(map(int, input().split()))
    row2 = list(map(int, input().split()))

    result = []
    for i in range(n1):
        result.append(row1[i] * row2[i])

    print(*result)