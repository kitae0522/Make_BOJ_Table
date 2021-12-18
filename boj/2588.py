"""
문제 링크 : https://www.acmicpc.net/problem/2588

code by Song Kitae(DKSH)
"""


if __name__ == '__main__':
    num1 = int(input())
    num2 = input()
    list(num2)
    for i in range(2, -1, -1):
        print(num1 * int((num2[i])))
    print(num1 * int(num2))
