# O(n^2) approach

for _ in range(int(input())):

  def solve():
    n = int(input())
    arr = list(map(int,input().split()))
    pre = [0]*n
    x = 0
    for i in range(n):
      x^=arr[i]
      pre[i]=x
    if x==0: return "YES"

    for i in range(n):
      v1 = pre[i]
      for j in range(1+i,n):
        v2 = pre[j]^v1
        v3 = x^pre[j]
        if v1==v2==v3: return "YES"
    
    return "NO"

  print(solve())
  
#   ----------------------------------------------------------------------------------------------
  
  
# O(n) approach

for _ in range(int(input())):

  def solve():
    n = int(input())
    arr = list(map(int,input().split()))
    x=0
    for i in range(n):
      x^=arr[i]

    if x==0: 
      return "YES"

    c,_x=0,0
    for a in arr:
      _x^=a
      if x==_x:
        _x=0
        c+=1
    
    return "YES" if c>2 else "NO"

  print(solve())
