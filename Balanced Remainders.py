for _ in range(int(input())):
  n = int(input())//3
  arr = list(map(int,input().split()))
  ans=0
  c=[0,0,0]
  for a in arr:
    if a%3==0: c[0]+=1
    elif a%3==1: c[1]+=1
    else: c[2]+=1

  c=[_-n for _ in c]
  # print(c)
  i=0
  k=0
  while k<3:
    if c[i]>0:
      c[i%3]-=1
      c[(i+1)%3]+=1
      ans+=1
      k=0
    else:
      k+=1
    i = (i+1)%3
  
  print(ans)
