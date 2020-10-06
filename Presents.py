n = int(input())
l = [0]*n
x = list(map(int,input().split()))
for i in range(n):
  l[x[i]-1] = i+1

print(' '.join([str(_) for _ in l]))
