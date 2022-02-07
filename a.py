n = int(input())

a = []

mx_h = 0
mn_h = 9999999999999999999999

for i in range(n):
    time, y = map(int, input().split())
    a.append((time, y))
    mx_h = max(mx_h, y)
    mn_h = min(mn_h, y)

up = 0
down = 0

#time , cloud location

a = sorted(a)

cords = [a[0][0], a[0][1]]

for i in a:
    diff = abs(cords[0] - i[0])
    if cords[1] > i[1]:
      cords[1] -= min(abs(i[1] - cords[1]), diff)
      cords[1] = max(mn_h + down, cords[1])
      down = max(down, abs(cords[1] - i[1]))
    else:
      cords[1] += min(abs(i[1] - cords[1]), diff)
      cords[1] = min(mx_h - up, cords[1])
      up = max(up, abs(cords[1] - i[1]))

    cords[0] += diff

    print(cords, up, down)

print(up + down)