word = input('请输入一个字符串:\n')
s = 0
d= 0
x= 0
others = 0
for i in word:
    if i>='0' and i<='9':
        s+=1
    elif i>= 'a' and i<= 'z':
        x+=1
    elif i>= 'A' and i<= 'Z':
        d+=1
    else:
        others+=1
print("大写字母个数=%d,小写字母个数=%d,数字个数=%d,其他字符个数=%d" % (d,x,s,others))