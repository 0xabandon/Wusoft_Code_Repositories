for i in range(1,8):
    if i<=4:
        print("*"*(2*i-1))
    else:
        print(" "*((i-4)*2)+"*"*(15-2*i))