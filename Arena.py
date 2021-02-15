for _ in range(int(input())):
  def xyz():
    n = int(input())
    a = sorted(list(map(int,input().split())))
    if a[0]!=a[1]:
      return n-1
    for i in range(1,n):
      if a[i]!=a[i-1]:
        return n-i
    return 0
  
  print(xyz())
