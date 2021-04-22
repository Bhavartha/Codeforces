def solve():
  def mm(a, b, mod=10**9+7):
    return (a*b)%mod

  def npr(n,r):
    ans = 1
    for i in range(r):
      ans = mm(ans,n)
      n-=1
    return ans
  
  n = int(input())
  arr = list(map(int,input().split()))
  mn = min(arr)
  mnc = arr.count(mn)
  if mnc==1: return 0
  for a in arr:
    if (mn&a)!=mn: return 0
  
  return mm(npr(mnc,2),npr(n-2,n-2))

for _ in range(int(input())):
  print(solve())
