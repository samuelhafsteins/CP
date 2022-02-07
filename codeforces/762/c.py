import sys

t = int(sys.stdin.readline())

for _ in range(t):
  a, s = sys.stdin.readline().rstrip().split()

  b = ""

  i = len(a) - 1
  j = len(s) - 1
  while i >= 0 and j >= 0:
    numA = int(a[i])
    numS = int(s[j])

    if numS < numA:
      j -= 1
      b += f"{10 - (numA - numS)}"

    else:
      b += f"{numS - numA}"

    i -= 1
    j -= 1
  
  b += s[:j+1]

  temp = ""

  a = a.zfill(len(b))

  b = b[::-1]

  b = b.zfill(len(a))

  for i in range(len(a)):
    temp += f"{int(a[i]) + int(b[i])}"

  if temp == s:
    print(int(b))
  else:
    print(-1)