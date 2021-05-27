import sys

for _ in range(5):
  #Take in how many dragons, knights
  dragons, knights = map(int, sys.stdin.readline().split())

  #If both are 0 then we are done so we break out of the for loop
  if dragons == 0 and knights == 0: break
  
  heads, heights = [], []

  #Input into the lists respectively
  for i in range(dragons):
    heads.append(int(sys.stdin.readline()))
  for i in range(knights):
    heights.append(int(sys.stdin.readline()))
  
  #Sort both arrays
  heads = sorted(heads)
  heights = sorted(heights)

  #currentHead will be the current index of what dragon we are on
  #answer is the answer we will print
  currentHead = 0
  answer = 0

  #Loop through the knights
  for i in range(knights):
    #Check if a knight can kill a dragon (it will always take the cheapest one first because we sorted the lists)
    if heights[i] >= heads[currentHead]:
      answer += heights[i]
      currentHead += 1 #We killed the first dragon, so we can go to the next one

    #Check if we have killed all the dragons, if so print the answer
    if currentHead == dragons:
      print(answer)
      break
  #You can use an else statement with a for loop to check if it completed it self without being broken
  #If that happend we know that there isn't a solution so we print "Loowater is doomed!"
  else:
    print("Loowater is doomed!")
