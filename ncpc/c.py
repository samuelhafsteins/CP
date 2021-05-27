import sys
from collections import deque

n = int(sys.stdin.readline())
arr = map(int, sys.stdin.readline().split())
sm = sum(arr)

#print [x for x in enumerate(arr)]
arr = list(enumerate(arr))
arr = sorted(arr, key=lambda x: x[1])

arr = [list(elem) for elem in arr if elem[1] != 0]
#print arr
#print arr
if not arr: print "no"
elif sm % 2 == 0 and arr[-1][1] <= sm/2:
  print "yes"
  b = len(arr) - 1
  a = 0
  while(a < b and a != b):
    print arr[a][0] + 1, arr[b][0] + 1
    arr[a][1] -= 1
    arr[b][1] -= 1
    if(arr[b][1] == 0 and a < b):
      b -= 1
    if(arr[a][1] == 0 and a < b):
      a += 1
else:
  print "no"

  