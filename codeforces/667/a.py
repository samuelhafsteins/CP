import sys, math

t = int(sys.stdin.readline())

for _ in range(t):
    a, b = map(int, sys.stdin.readline().split())
    print int(math.ceil(abs(a-b)/10.0))