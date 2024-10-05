"""
箱子里有n个苹果，还混进了一条虫子。虫子每x个小时吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？
"""
def remaining_apples(n, x, y):
    hours = y // x
    remaining_hours = y % x
    apples_eaten = min(hours, n)
    if remaining_hours > 0:
        apples_eaten += 1
    return n - apples_eaten
n = int(input("请输入箱子里的苹果数量："))
x = int(input("请输入虫子吃掉一个苹果所需的小时数："))
y = int(input("请输入经过的小时数："))
result = remaining_apples(n, x, y)
print("经过{}小时后，还剩下{}个完整的苹果。".format(y, result))