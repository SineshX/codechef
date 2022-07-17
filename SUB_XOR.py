
from itertools import combinations


t = int(input())
for _ in range(t):

    s = input()

    freq ={}
    XOR = 0

    for x, y in combinations(range(len(s) + 1), r = 2):
        item = int(s[x:y],2)
        if (item in freq):
            freq[item] += 1
        else:
            freq[item] = 1

    # for i in range(len(s)):
    #     for j in range(i, len(s)):

    #         item = int(s[i:j+1], 2)
    #         if (item in freq):
    #             freq[item] += 1
    #         else:
    #             freq[item] = 1
    # Do XOR operation
    for key,value in freq.items():
        if value&1:
            XOR = XOR ^ key

    # print(freq)
    print(XOR)



