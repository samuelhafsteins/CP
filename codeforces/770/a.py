import sys

t = int(sys.stdin.readline())

for _ in range(t):
  n, k = map(int, sys.stdin.readline().split())
  s = sys.stdin.readline().strip()
  if k == 0 or s == s[::-1]:
    print(1)
  else:
    print(2)