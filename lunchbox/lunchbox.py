N, m = input().split(" ")
N, m = int(N), int(m)
k = [int(input()) for _ in range(m)]
K = sum(k)
numLost = 0

k.sort()
k = reversed(k)

codeFinished = False

for Ki in k:
  if K <= N:
    print(m - numLost)
    codeFinished = True
    break

  K -= Ki
  numLost+=1

if not codeFinished:
  print(0)
