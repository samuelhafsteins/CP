import sys

t = int(sys.stdin.readline())
for _ in range(t):
  n = int(sys.stdin.readline())
  arr = list(map(int, sys.stdin.readline().split()))
  
  cost = 0
  for i in range(n - 1):
    #print(arr[i:])
    idxmn = arr.index(min(arr[i:]))
    cost += idxmn - i + 1
    arr[i:idxmn + 1] = arr[i:idxmn + 1][::-1]
    #print(arr, idxmn)
  print(f"Case #{_+1}: {cost}")
