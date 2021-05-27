import sys

def valid(a, b):
  for i in range(len(b)):
    if int(a[len(a)-i-1])+int(b[len(b)-i-1]) >= 10:
      return False
  return True

in1 = int(sys.stdin.readline())
in2 = int(sys.stdin.readline())

a = max(in1,in2)
b = min(in1,in2)

adds = 0

while(valid(str(a), str(b)) != True):
  a+=1
  b-=1
  adds+=1

print(adds)
print(a + adds)
print(b - adds)