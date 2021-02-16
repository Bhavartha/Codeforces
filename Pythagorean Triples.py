from bisect import bisect_left 

cv = []
ip = []
for _ in range(int(input())):
  ip.append(int(input()))

mx = max(ip)+1
for a in range(3,mx,2):
  b = (a**2 -1)//2
  c = b+1
  if c>mx:
    break
  if c == a**2 - b:
    cv.append(c)

for i in ip:
  x = bisect_left(cv, i+1)
  if x:
    print(x) 
  else: 
    print(0)
