import sys

n = int(sys.stdin.readline())

arr = map(int, sys.stdin.readline().strip().split())
arr = sorted(arr)

for i in range(n-1):
  s = str(arr[i])
  k = str(arr[i+1])
  for j in range(len(s)):
    if int(s[j]) < int(k[j]):
      ...