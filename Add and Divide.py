def xyz():
  a,b = list(map(int,input().split()))

  if b>a:
    print(1)
    return
  
  mn = a+1
  c=0
  if b==1:
    c=1

  while b+c<=mn:
    aa = a
    x = b+c
    xx = 0
    while aa>0:
      aa//= x
      xx+=1
    
    mn = min(mn,c+xx)
    c+=1
  
  print(mn)

for _ in range(int(input())):
  xyz()
