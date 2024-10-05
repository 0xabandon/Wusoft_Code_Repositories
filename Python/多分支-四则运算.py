a=float(input('请输入一个数:'))
b=float(input('请输入一个数:'))
c=input('请选择运算符:+ - * /: ')
if c=='+':
    print(a+b)
elif c=='-':
    print(a-b)
elif c=='*':
    print(a*b)
elif c=='/':
    if b==0:
        print('除数不为零')
    else:
        print(a/b)