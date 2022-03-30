n, x = map(int, input().split())

sm = 0
for _ in range(n):
  sm += int(input())

if x >= sm:
  print("Jebb")
else:
  print("Neibb")