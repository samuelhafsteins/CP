import sys
from itertools import permutations

t = int(sys.stdin.readline())
for _ in range(t):
  n, c = map(int, sys.stdin.readline().split())
  #arr = list(map(int, sys.stdin.readline().split()))
  
  alles = list(permutations(range(1, n+1)))
  #print(alles)
  
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
    if cost == c:
      print(f"Case #{_+1}:", " ".join(list(map(str, tmp))))
      break
  else:
    print(f"Case #{_+1}: IMPOSSIBLE")