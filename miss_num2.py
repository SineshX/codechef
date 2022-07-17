t = int (input())
for _ in range(t):
    lst = list(map(int, input().split()))
    if 0 in lst:
        # flag = True
        min_val = min(lst)
        lst.remove(min_val)
        for i in lst:
            if (min_val + i)%2 == 0:
                # flag = False 
                a = (min_val + i)//2 
                b = a - min_val
                if a < b:
                    print(a,b)
                else:
                    print(-1,-1)
                # lst.remove(i)
                # if a*b in lst and a//b == 0:
                #     print(a,b)
                # else:
                #     print(-1,-1)
                break
    else:
        print(-1,-1)

    # if flag:
    #     print("-1 -1")