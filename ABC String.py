def isValid(s):
  op = 0
  for i in s:
    if i=='(': op+=1
    else: op-=1
    if op<0: return False
  return op==0

for i in range(int(input())):
  ip = input()
  f = ip[0]
  l = ip[-1]
  ip = ip.replace(f,'(').replace(l,')')
  r = list({'A','B','C'} - {f,l})[0]
  if isValid(ip.replace(r,'(')) or isValid(ip.replace(r,')')):
    print("YES")
  else:
    print("NO")
