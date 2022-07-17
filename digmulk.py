import math
t = 1
# t = int(input())


for dj in range(t):

    n,k,m = [int(x) for x in input().split()]

    s = int(input())
    # if m = 0 return 
    # else 
    # 
    # simple split :) 
    mylist = []
    for i in range(math.ceil(math.log(s, 10))-1, -1, -1):
        mylist.append( (s//(10**i))%10 )

    # for k-1 level
    for pj in range(m):
        # multiplay 
        
        for num in mylist:
            num = num * k
            if(num > 9) :
                # pass
                x = [(num//(10**i))%10 for i in range(math.ceil(math.log(num, 10))-1, -1, -1)]
                # make a list of split elements  
                #  add a elemt to i : 
                i = x[0]
                # rest elemt ko secondary list me applend kro 
                #  newlist.append(each elemtn )
                print(x[1:])
            mylist = mylist + x[1:]
            print(mylist)
        # split each number of the list into into digit 

        # add bot the list 
        # new_list = old_list[:]

        

        # y.append((num//(10**i))%10 for i in range(math.ceil(math.log(num, 10))-1, -1, -1))
    


    # return size of x
    print(len (mylist))
