import sys

n = int(sys.stdin.readline())

nums = list(map(list, sys.stdin.readline().strip().split()))

for i in range(len(nums)-1):
  if len(nums[i]) == len(nums[i+1]):
    for j in range(len(nums[i])):
      tmp = nums[i][j]
      nums[i][j] = '9'
      if int(''.join(nums[i])) > int(''.join(nums[i+1])):
        [print(''.join(i),end=' ') for i in nums]
        exit()
      nums[i][j] = tmp
      
      tmp = nums[i+1][j]
      nums[i+1][j] = '1'
      if int(''.join(nums[i])) > int(''.join(nums[i+1])):
        [print(''.join(i),end=' ') for i in nums]
        exit()
      nums[i+1][j] = tmp

      if j != 0:
        tmp = nums[i+1][j]
        nums[i+1][j] = '0'
        if int(''.join(nums[i])) > int(''.join(nums[i+1])):
          [print(''.join(i),end=' ') for i in nums]
          exit()
        nums[i+1][j] = tmp

print("impossible")