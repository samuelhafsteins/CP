import sys
from itertools import permutations
from collections import defaultdict

t = int(sys.stdin.readline())
for _ in range(t):
  n = int(sys.stdin.readline())
  #arr = list(map(int, sys.stdin.readline().split()))
  
  alles = list(permutations(range(1, n+1)))
  #print(alles)
  a = defaultdict(list)
  for tmp in alles:
    arr = list(tmp)
    cost = 0
    for i in range(n - 1):
      #print(arr[i:])
      idxmn = arr.index(min(arr[i:]))
      #print(idxmn)
      cost += idxmn - i + 1
      arr[i:idxmn + 1] = arr[i:idxmn + 1][::-1]
      #print(arr, idxmn)
    a[cost].append(tmp)
  for i in a:
    print(a[i], i)