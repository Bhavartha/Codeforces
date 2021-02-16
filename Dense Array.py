for _ in range(int(input())):
  n = int(input())
  arr = list(map(int,input().split()))
  ans = 0
  for i in range(1,n):
    mn = min(arr[i],arr[i-1])
    mx = max(arr[i],arr[i-1])
    while mn*2<mx:
      mn*=2
      ans+=1
  print(ans)
