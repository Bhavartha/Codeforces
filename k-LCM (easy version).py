for _ in range(int(input())):
    n,_ = list(map(int,input().split()))
    n1,n2,n3 = 0,0,0
    if n%2==1:
        n1 = 1
        n2 = n//2
        n3 = n//2
    elif n%4==0:
        n1 = n//2
        n2 = n1//2
        n3 = n1//2
    else:
        n1 = n//4 * 2
        n2 = n1
        n3 = n - n1 - n2
    print(n1,n2,n3)
