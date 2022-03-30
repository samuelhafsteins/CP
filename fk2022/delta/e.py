input()
p = float(input())
n = int(input())

sm = 0
for _ in range(n):
  temp = input()
  if temp != "plast":
    sm += 1

if p >= sm/n:
  print("Jebb")
else:
  print("Neibb")