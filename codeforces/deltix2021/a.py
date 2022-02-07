import sys

t = int(sys.stdin.readline())

for _ in range(t):
  n = int(sys.stdin.readline())
  a = list(map(int, sys.stdin.readline().strip().split()))

  c = 0
  for i in range(n):
    while a[i] % 2 == 0:
      c += 1
      a[i] //= 2
    
  print(2**c * max(a) + (sum(a) - max(a)))