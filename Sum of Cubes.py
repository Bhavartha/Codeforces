def solve():
  n = int(input())
  d=set()
  for i in range(1,int(n**(1/3))+2):
    d.add(i**3)
    if n-(i**3) in d:
      return "YES"
  return "NO"

for _ in range(int(input())):
  print(solve())
