import sys

n = int(sys.stdin.readline())

for _ in range(n):
  s = sys.stdin.readline().rstrip()
  print("".join(sorted(s)))