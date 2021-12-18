"""
문제 링크 : https://www.acmicpc.net/problem/10870

code by Song Kitae(DKSH)
"""


def fibo(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibo(n-1) + fibo(n-2)


if __name__ == "__main__":
    n = int(input())
    result = fibo(n)
    print(result)