"""
문제 링크 : https://www.acmicpc.net/problem/10039

code by Song Kitae(DKSH)
"""


if __name__ == '__main__':
    size = 5
    arr = []
    res = 0
    for i in range(size):
        num = int(input())
        if num < 40:
            num = 40
            arr.append(num)
        else:
            arr.append(num)
        res += arr[i]
    print(int(res/5))
