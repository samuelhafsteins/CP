import sys
for _ in range(5):
  n, m = map(int, sys.stdin.readline().split())
  if n == 0 and m == 0: break
  knights, heads = [], []

  for i in range(n): heads.append(int(sys.stdin.readline()))
  for i in range(m): knights.append(int(sys.stdin.readline()))
   
  heads = sorted(heads)
  knights = sorted(knights)

  h = 0
  sm = 0
  for i in range(m):
    if knights[i] >= heads[h]:
      sm += knights[i]
      h+=1
    if h == n:
      print(sm)
      break
  else:
    print("Loowater is doomed!")