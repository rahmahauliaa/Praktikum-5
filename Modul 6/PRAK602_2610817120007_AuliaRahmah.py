n = int(input())
zetsu = list(map(int, input().split()))

result = []
for i in range(n):
    result.append(zetsu[i] * (i + 1))

print(*result)