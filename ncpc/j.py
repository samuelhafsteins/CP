import sys

k = int(raw_input())
arr = [[0, 0, 0] for i in range(k)]

tStart = 0
minFlow = 0
maxFlow = 0
minTemp = 0.0
maxTemp = 0.0
mn = 0.0
mx = 0.0
for i in range(k):
  arr[i][0], arr[i][1], arr[i][2] = map(int, sys.stdin.readline().split())
  tStart = arr[i][1] * arr[i][0]
  minFlow += arr[i][1]
  maxFlow += arr[i][2]

arr = sorted(arr)
#print arr

#print minFlow, maxFlow


r = int(sys.stdin.readline())

#print tStart
for i in range(r):
  t, f = map(int, sys.stdin.readline().split())
  flow = f - minFlow
  minTemp = tStart
  if(f >= minFlow and f <= maxFlow):
    for i in range(k):
      top = arr[i][2]
      bot = arr[i][1]
      if(top <= flow):
        #print flow, "flow"
        flow -= top - bot
        minTemp += (top - bot) * arr[i][0]
      else:
        #print flow, "flow"
        minTemp += flow * arr[i][0]
        break
    #print minTemp, "mn"


    mn = float(minTemp)/f
    maxTemp = tStart
    flow = f - minFlow
    #print arr
    for i in range(k - 1, -1, -1):
      top = arr[i][2]
      bot = arr[i][1]
      #print top, bot, flow, " look"
      if(top <= flow):
        flow -= top - bot
        maxTemp += (top - bot) * arr[i][0]
      else:
        maxTemp += flow * arr[i][0]
        break
    #print maxTemp
    mx = float(maxTemp)/f
    if(t <= mx and t >= mn):
      print "yes"
      continue
  print "no"

