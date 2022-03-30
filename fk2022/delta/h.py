n, m = map(int, input().split())

s = [n//3, n//3, n//3]

for i in range(n%3):
  s[i] += 1

m -= s[-1] + 1
if m > s[1]:
  print("Unnar")
else:
  print("Arnar")