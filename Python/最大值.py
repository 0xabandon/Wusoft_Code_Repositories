x = int(input("第一个数:"))
y = int(input("第二个数:"))
z = int(input("第三个数:"))
a = (lambda x,y,z: x if (x > y and x > z) else (y if y > z else z))
print("最大的是：", a(x,y,z))
'''
x = input("第一个数:")
y = input("第二个数:")
z = input("第三个数:")
a = (lambda x, y: x if x > y else y)
print("前两个数较大的是：", a(x, y))
if x > y:
    b = (lambda x, z: x if x > z else z)
    print("最大的是：", a(x, z))
elif x < y:
    c = (lambda y, z: y if y > z else z)
    print("最大的是：", a(y, z))
'''