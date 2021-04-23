for _ in range(int(input())):
  def solve():
    n = int(input())
    if n%2050!=0: return -1
    q = n//2050

    ans = 0
    while q>0:
      ans+= q%10
      q//=10
    return ans
  
  print(solve())
