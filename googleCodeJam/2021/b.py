import sys

t = int(sys.stdin.readline())

for _ in range(t):
  x, y, s = map(str, sys.stdin.readline().split())
  #print(x, y)
  x = int(x)
  y = int(y)

  cost = 0
  tmp = ""
  for i in range(len(s)):
    if s[i] != "?": tmp += s[i]

  for i in range(len(tmp) - 1):
    #print(tmp[i:i+2], cost)
    if tmp[i:i+2] == "JC": 
      cost += y
      #print("x", tmp[i:i+2], cost)
    elif tmp[i:i+2] == "CJ": 
      cost += x
      #print("y", tmp[i:i+2], cost)

  print(f"Case #{_+1}: {cost}")
