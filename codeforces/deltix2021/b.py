import sys

def doStuff(i):
  if s[i] == 'c':
    if i > 1:
      if s[i - 1] == 'b' and s[i - 2] == 'a':
        return True

  elif s[i] == 'b':
    if i > 0 and i < (n - 1):
      if s[i - 1] == 'a' and s[i + 1] == 'c':
        return True
  
  else:
    if i < (n - 2):
      if s[i + 1] == 'b' and s[i + 2] == 'c':
        return True
  
  return False

n, q = map(int, sys.stdin.readline().split())

s = sys.stdin.readline().rstrip()

mn = s.count("abc")

s = list(s)

for _ in range(q):
  i, c = sys.stdin.readline().split()
  i = int(i) - 1

  if s[i] == c:
    print(mn)
    continue

  if doStuff(i): mn -= 1

  s[i] = c

  if doStuff(i): mn += 1

  print(mn)