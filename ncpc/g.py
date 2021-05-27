count = 0

raw_input()
arr = list(map(int, raw_input().strip().split()))

twos = 0
ans = list()

for x in range(len(arr)):
  if arr[x] == 1: ans.append(twos)
  elif arr[x] == 2: twos += 1
  else:
    for i in ans:
      #print twos - i
      count += (pow(2, (twos - i), 10**9 + 7) - 1) % (10**9 + 7)
    #print count

print count % (10**9 + 7)