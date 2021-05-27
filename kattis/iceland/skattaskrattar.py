import sys, bisect, math

def indx(a, x):
  'Locate the leftmost value exactly equal to x'
  i = bisect.bisect_left(a, x)
  if i != len(a) and a[i] == x:
    return i
  return 0

n, m = map(int, sys.stdin.readline().split())

arr3020 = [(0, 0)]
arr3020idx = []
arr3020Pro = []
points = set()
for i in range(n-1):
  a,b = map(int, sys.stdin.readline().split())
  a /= 100
  arr3020.append((b, (b-arr3020[i][0])*a + arr3020[i][1]))
  arr3020idx.append(b)
  arr3020Pro.append(a)
  points.add(b)
arr3020Pro.append(int(sys.stdin.readline())/100)

arr3021 = [(0, 0)]
arr3021idx = []
arr3021Pro = []
for i in range(m-1):
  a,b = map(int, sys.stdin.readline().split())
  a /= 100
  arr3021.append((b, (b-arr3021[i][0])*a + arr3021[i][1]))
  arr3021idx.append(b)
  arr3021Pro.append(a)
  points.add(b)
arr3021Pro.append(int(sys.stdin.readline())/100)

#print(arr3020, arr3021)
points = sorted(points)
hi = 10**7
points.append(hi)

print(0)
#print(points)
check = [0]



for i in range(len(points) - 1):
  l, h = points[i], points[i+1]
  idxL3020 = bisect.bisect_left(arr3020idx, l)
  idxH3020 = bisect.bisect_left(arr3020idx, h)
  lower3020 = l - (arr3020[idxL3020][1] + (l - arr3020[idxL3020][0]) * arr3020Pro[idxL3020])
  higher3020 = h - (arr3020[idxH3020][1] + (h - arr3020[idxH3020][0]) * arr3020Pro[idxH3020])

  idxL3021 = bisect.bisect_left(arr3021idx, l)
  idxH3021 = bisect.bisect_left(arr3021idx, h)
  lower3021 = l - (arr3021[idxL3021][1] + (l - arr3021[idxL3021][0]) * arr3021Pro[idxL3021])
  higher3021 = h - (arr3021[idxH3021][1] + (h - arr3021[idxH3021][0]) * arr3021Pro[idxH3021])

  #print(lower3020, lower3021, l)
  #print(lower3020, higher3020, lower3021, higher3021, points[i], points[i+1])
  if((lower3020 > lower3021 and higher3020 <= higher3021) or (lower3020 < lower3021 and higher3020 >= higher3021)):
    #m1 = lower m2 = higher
    m1 = (h-l)/(higher3020 - lower3020)
    m2 = (h-l)/(higher3021 - lower3021)
    #print(m1, m2)
    #b1 = lower b2 = higher
    b1 = l-m1*lower3020
    b2 = l-m2*lower3021
    #print(b1, b2)
    #print(m2, m2 * (b1-b2)/(m2-m1) + b2, b2)
    ans = m2*((b1-b2)/(m2-m1)) + b2
    #if (ans != check[indx(check, ans)]):
    print(ans)
      #check.append(ans)