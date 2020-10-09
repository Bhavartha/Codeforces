def rindex(alist, value):
    return len(alist) - alist[-1::-1].index(value) -1

_ = int(input())
arr = list(map(int,input().split()))
ans=0

mx = max(arr)
mxi = arr.index(mx)
for i in range(mxi,0,-1):
  arr[i],arr[i-1]=arr[i-1],arr[i]
  ans+=1

mn = min(arr)
mni = rindex(arr,mn)
for i in range(mni,_-1):
  arr[i+1],arr[i]=arr[i],arr[i+1]
  ans+=1
  
print(ans)
