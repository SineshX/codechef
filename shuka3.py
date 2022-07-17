lst = list(map(int, input().split(',')))


def printmatrix2(m):
    for i in range(0,25):
        print(m[i],end="")
        if((i+1) % 5 == 0):
            print()
        else:
            print(',',end="")

