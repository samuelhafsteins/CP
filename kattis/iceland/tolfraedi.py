import sys, bisect

def index(a, x):
    i = bisect.bisect_left(a, x)
    if i != len(a) and a[i] == x:
        return i
    return False

q = int (sys.stdin.readline())

#sum
sm = 0
#people
p = 0

arr = list()

for i in range(q):
    a, b = sys.stdin.readline().strip().split()
    b = int(b)
    if a == 'A':
        sm += b
        p += 1
        bisect.insort_left(arr, b)
    else:
        sm -= b
        p -= 1
        del arr[index(arr, b)]


    if p == 0:
        print "-1 -1 -1"
    else:
        avg = sm/float(p)
        print arr[0], arr[-1], avg
