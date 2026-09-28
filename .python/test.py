import sys
import platform

print("=" * 40
)
print("Python 环境测试"
)
print("=" * 40
)

print("Python 版本：", sys.
version)
print("Python 路径：", sys.
executable)
print("操作系统：", platform.system(), platform.
release())

# 简单计算
a = 10
b = 20
print("10 + 20 =", a + b
)

# 列表测试
numbers = [1, 2, 3, 4, 5
]
print("列表平方：", [x ** 2 for x in numbers
])

print("=" * 40
)
print("测试成功！"
)
print("=" * 40)