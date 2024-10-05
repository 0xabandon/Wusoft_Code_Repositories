for i in range(1,51):
    if i % 7 == 0 or i % 10 == 7 or int(i / 10) % 10 == 7 :
        continue
    print(i)