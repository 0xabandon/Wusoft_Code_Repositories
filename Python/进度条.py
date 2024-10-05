'''
import time
incomplete_sign=50
print('='*23+'开始下载'+"="*25)
for i in range(incomplete_sign+1):
    complete="="*i
    incomplete="."*(incomplete_sign-i)
    percentage=float(i)/float(incomplete_sign)
    print("\r{:.0%}[{}{}]".format(percentage,complete,incomplete),end="")
    time.sleep(0.5)
print()
print("="*23+"下载完成"+"="*25)
'''
import time
print('='*23+'下载开始'+'='*25)
zl=50
for k in range(zl+1):
    wcd=k
    wwcd=zl-k
    bfb=float(wcd)/float(zl)*100
    print('\r{:.0f}%[{}{}]'.format(bfb,'*'*wcd,'.'*wwcd),end=' ')
    time.sleep(0.5)
print('')
print('='*23+'下载完成'+'='*25)