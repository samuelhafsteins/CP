import sys

t = int(sys.stdin.readline())

for _ in range(t):
    a, b = map(int, sys.stdin.readline().split())
    if a > b: a, b = bin(b), bin(a)
    else: a, b = bin(a), bin(b)

    if a == b[:len(a)] and '1' not in b[len(a):]:
        ln = max(len(a), len(b)) - min(len(a), len(b))
        print ln//3 + 1 if ln % 3 != 0 else ln//3
    else: print -1