ans = ""
s = input()
i = 0
for i in s:
  _ = i.lower()
  if _ not in ('a','e','i','o','u','y'):
    ans+='.'+_

print(ans)
