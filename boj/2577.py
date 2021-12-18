"""
문제 링크 : https://www.acmicpc.net/problem/2577

code by Song Kitae(DKSH)
"""


if __name__ == "__main__":
    A = int(input())
    B = int(input())
    C = int(input())

    X = A * B * C
    X = str(X)

    num = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    for i in range(10):
        for j in range(len(X)):
            if i == int(X[j]):
                num[i] += 1

    for k in num:
        print(k)
