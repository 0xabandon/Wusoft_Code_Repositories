import random
print ("我在1-100之间选了一个数, 你能猜对它吗?")
random_num= random.randint(1,100)
for k in range(1,6):
    num = int(input("请输入你猜的数字:"))
    if num == random_num:
        print ("你猜对了！")
        break
    elif num < random_num:
        print ("比我选的数小")
        if k==5:
            print('已经输入了5次，正确答案为{0}'.format(random_num))
    else:
        print ("比我选的数大")
    if k==5:
        print('已经输入了5次，正确答案为{0}'.format(random_num))
'''
import random
print ("我在1-100之间选了一个数, 你能猜对它吗?")
random_num= random.randint(1,100)
for k in range(1,6):
    num = input('你第{}次输入数字:'.format(k))
    if num.isdigit() is False:
        print('请输入一个正确的数字')
    elif int(num)>100 or int(num)<0:
        print('请输入1~100的数字')
    elif int(num) == random_num:
            print("你用了%d次猜对"%k)
            break
    elif int(num) < random_num:
        print ("比我选的数小")
    elif int(num) > random_num:
        print ("比我选的数大")
    if k==5:
        print('已经输入了5次，正确答案为{0}'.format(random_num))
'''