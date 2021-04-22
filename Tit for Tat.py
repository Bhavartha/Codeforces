for _ in range(int(input())):
  n,k = list(map(int,input().split()))
  arr = list(map(int,input().split()))
  i = 0
  while k>0 and i<len(arr):
    m = min(arr[i],k)
    arr[i]-=m
    arr[-1]+=m
    k-=m
    if arr[i]==0:
      i+=1
  print(" ".join([str(_) for _ in arr]))
