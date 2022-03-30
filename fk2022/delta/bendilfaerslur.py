import sys

ip = sys.stdin.readline().strip()

if ":" not in ip:
  a = ip.split(".")
  print(".".join(a[::-1]) + ".in-addr.arpa")
else:
  if "::" in ip:
    f, s = ip.split("::")
    c = f.count(":") + s.count(":")
    if f != "":
      f += ":"
      c += 1
    if s == '':
      s = '0'
    ip = f + (f"0:" * (7 - c)) + s

  ans = ""
  for t in ip.split(":"):
    ans += "0" * (4-len(t)) + t

  print(".".join(list(ans[::-1])) + ".ip6.arpa")
  
