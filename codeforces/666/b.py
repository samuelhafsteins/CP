import sys

n = int(sys.stdin.readline())

arr = list(map(int ,sys.stdin.readline().split()))
smList = sum(arr)
arr = sorted(arr)
ans = smList - n
c = True

#max can go to 31622 and after a some point 1 is the cheapest also can't go over 10**9
if n < 33:
    for i in range(1, 35000):
        sm = 0
        for j in range(40):
            #print sm
            if i**j > 10**10:
                #print i, j, i**j
                break
            sm += abs(arr[j] - i**j)
            #print sm, i, j, n, arr[j] - i**j
            if j == n - 1:
                ans = min(ans, sm)
                #print sm, i
                break

#print smList, sm
print ans