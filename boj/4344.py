"""
문제 링크 : https://www.acmicpc.net/problem/4344

code by Song Kitae(DKSH)
"""


if __name__ == '__main__':
    size = int(input())
    for i in range(size):
        num = list(map(int, input().split(' ')))
        avg = sum(num[1:]) / num[0]
        cnt = 0
        for j in num[1:]:
            if j > avg:
                cnt += 1

        print(str("%.3f" % round((cnt / num[0]) * 100, 3)) + "%")
