import sys

inp = sys.stdin.readline().strip().split()

wordNum = {}
numWord = {}

while inp[0] != "clear":
  if inp[0] == "def":
    word = inp[1]
    num = inp[2]

    try:
      del numWord[wordNum[word]]
    except:
      pass

    wordNum[word] = int(num)
    numWord[int(num)] = word

  else:
    try:
      sm = wordNum[inp[1]]
      for i in range(2, len(inp), 2):
        if inp[i] == "+":
          sm += wordNum[inp[i+1]]
        elif inp[i] == "-":
          sm -= wordNum[inp[i+1]]
      word = numWord[sm]
    except:
      word = "unknown"

    print(" ".join(inp[1:]), word)

  inp = sys.stdin.readline().strip().split()