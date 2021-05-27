from collections import Counter
import sys

t = int(sys.stdin.readline())

for _ in range(t):
    n = int(sys.stdin.readline())
    c = Counter()
    for i in range(n):
        c.update(sys.stdin.readline().rstrip())
    for i in c:
        if c[i] % n != 0:
            print "NO"
            break
    else:
        print "YES"