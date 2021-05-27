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
if not arr: print "yes"
elif sm % 2 == 0 and arr[-1][1] <= sm/2:
  print "yes"
  b = arr[-1]
  a = arr[-2]
  while(arr[-1][1] != 0):
    print a[0] + 1, b[0] + 1
    a[1] -= 1
    b[1] -= 1
    arr = sorted(arr, key=lambda x: x[1])
    b = arr[-1]
    a = arr[-2]
  
else:
  print "no"

  