import sys
from math import log

c = int(sys.stdin.readline())

lo, hi = 0, 10**100

ans = 0

while lo <= hi:
  mid = (lo+hi)//2
  if mid * log(mid, 10)/10**6 > c:
    hi = mid - 1
  else:
    lo = mid + 1
    ans = mid

print ans