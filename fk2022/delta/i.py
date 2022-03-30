from collections import deque

n, k = map(int, input().split())

c = []
d = []

a = list(map(int, input().split()))
b = list(map(int, input().split()))

for i in range(n):
  if a[i] == 4:
    c.append(b[i])
  elif a[i] > 4:
    d.append(b[i])

c = deque(sorted(c))
d = deque(sorted(d))

def nope():
  print("Neibb")
  quit()

for i in range(k, 0, -1):
  if len(d) == 0:
    nope()
  if d[-1] < i:
    nope()
  d.pop()
  if len(c) > 0 and c[-1] >= i:
    c.pop()
  elif len(d) > 0 and d[-1] >= i:
    d.pop()
  else:
    nope()

print("Jebb")
