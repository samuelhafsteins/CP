from collections import defaultdict
u, k = map(int, input().split())

d = defaultdict(list)
m = defaultdict(int)
a = defaultdict(int)
for _ in range(u):
  s = input()
  h = int(input())
  for _ in range(h):
    r, x = input().split()
    d[s].append((r, int(x)))

for _ in range(k):
  n = int(input())
  for i in range(n):
    s, y = input().split()
    a[s] += int(y)

for s in a:
  for items in d[s]:
    m[items[0]] += items[1] * a[s]

for key in sorted(m.keys()):
  print(key, m[key])
