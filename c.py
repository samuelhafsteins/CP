n = int(input())

def finish(a, b):
  print(f"? {a} {n}", flush=True)
  res = input()
  if res == "equal":
    return b
  return a

ans = 0

for i in range(1, n - 1, 2):
  print(f"? {i} {i + 1}", flush=True)
  res = input()
  if res != "equal":
    ans = finish(i, i+1)
    break

if not ans:
  ans = n
  print(f"? {1} {n}", flush=True)
  res = input()
  if res == "equal":
    ans = n - 1

print(f"! {ans}", flush=True)

