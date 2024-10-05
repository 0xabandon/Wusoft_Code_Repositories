import random
checkcode = ''
for i in range(4):
    index = random.randrange(0,4)
    if index != i and index+1 != i:
        checkcode += chr(random.randint(97,122))
    elif index+1 == i:
        checkcode += chr(random.randint(65,90))
    else:
        checkcode += str(random.randint(0,9))
print("当前验证码为:",checkcode)
'''
import random
code = ''
for i in range(4):
    n = random.randint(0, 9)
    b = chr(random.randint(65, 90))
    s = chr(random.randint(97, 122))
    code += str(random.choice([n, b, s]))
print('生成的验证码为:',code)
'''