from collections import Counter
import sys

n = sys.stdin.readline().rstrip()

n = sorted(n)

s = len(n)

c = Counter()

if s & 1:
    no = False
    let = ''
    for i in n:
        c[i] += 1
    
    for i in c:
        if c[i] & 1 and no:
            print "NO SOLUTION"
            exit(0)
        elif c[i] & 1:
            no = True
            let = i

    del n[n.index(let)]

    ans = [0 for i in range(s/2)]

    for i in range(len(n)):
        ans[i/2] = n[i]
    
    print ''.join(ans) + let + ''.join(ans[::-1])
    
else:
    a, b = [0 for i in range(s/2)], [0 for i in range(s/2)]

    for i in range(s):
        if i & 1:
            a[i/2] = n[i]
        else:
            b[i/2] = n[i]

    if a == b:
        print ''.join(a) + ''.join(b[::-1])
    else:
        print "NO SOLUTION"

# work