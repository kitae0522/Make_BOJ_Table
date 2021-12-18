"""
문제 링크 : https://www.acmicpc.net/problem/2749

code by Song Kitae(DKSH)
"""


import sys


def fibo(n):
    a, b = 0, 1
    for i in range(n):
        a, b = b%1000000, (a+b)%1000000
    return a

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    print(fibo(n))