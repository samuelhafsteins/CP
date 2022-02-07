import sys

n = int(sys.stdin.readline())

for _ in range(n):
  mx = 0
  x = sys.stdin.readline().rstrip()
  for i in range(len(x) - 2, -1, -1):
    if int(x[i]) + int(x[i+1]) >= 10:
      print(x[:i] + str(int(x[i]) + int(x[i+1])) + x[i+2:])
      break
  else:
    print(str(int(x[0]) + int(x[1])) + x[2:])