import sys, timeit

sys.setrecursionlimit(10**8)

#n = int(sys.stdin.readline())

mod = 10 ** 9 + 7
fib = [-1 for i in range(10**6)]
fib[0] = 1
fib[1] = 1

def solve(x):
  if fib[x] != -1:
    return fib[x]
  
  fib[x] = (solve(x - 1) + solve(x - 2)) % mod
  return fib[x]

#for i in range(n):
  #print(solve(int(sys.stdin.readline()) + 1) % mod)

print(timeit.timeit('solve(10000)', setup="from __main__ import solve", number=1000))