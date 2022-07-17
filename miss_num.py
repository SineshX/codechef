t = int (input())
for _ in range(t):
    lst = list(map(int, input().split()))
    m = min(lst)

    lst.remove(m)
    flag = True
    for i in lst:
        if (m + i )%2 == 0:
            flag = False
            a = int((i +m)/2)
            b = a - m
            lst.remove(i)
            if a*b in lst :
                if a//b in lst:
                    print(a,b)
                else:
                    print("-1 -1")

            else:
                print("-1 -1")

            break
    if flag:
        print("-1 -1")