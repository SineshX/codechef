from itertools import combinations

t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    x=0
    f ={}
    for x, y in combinations(range(len(s) + 1), r = 2):
        it = int(s[x:y], 2)
        if it in f:
            f[it] += 1
        else:
            f[it] = 1
    
    for k, v in f.items():
        if v&1:
            x = x ^ k
    print(x)
    # print(x)