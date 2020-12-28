def xyz():
  ip = input()
  op = ip.count('(')
  ed = ip.count(')')
  q = ip.count('?')
  qop = 0
  qed = 0
  if op>ed:
    qed = op-ed
    q-= qed
  elif op<ed:
    qop = ed-op
    q-= qop
  if q&1:
    return 'NO'
  else:
    qop+=q//2
    qed+=q//2
  
  ip = list(ip)
  v=0
  for i in range(len(ip)):
    if ip[i]=='(':
      v+=1
    elif ip[i]==')':
      v-=1
    elif ip[i]=='?' and qop>0:
      v+=1
      qop-=1
    elif ip[i]=='?' and qed>0:
      v-=1
      qed-=1
    if v<0:
      return 'NO'
  
  return 'YES' if v==0 else 'NO'


for _ in range(int(input())):
  print(xyz())
