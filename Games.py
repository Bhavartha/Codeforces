from collections import Counter

x,y=Counter(),Counter()
for i in range(int(input())):
  a,b = list(map(int,input().split()))
  x[a]+=1
  y[b]+=1

ans=0
for l in dict(x).keys():
  if l in dict(y):
    ans+= dict(x)[l]*dict(y)[l]
print(ans)
