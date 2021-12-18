"""
문제 링크 : https://www.acmicpc.net/problem/11653

code by Song Kitae(DKSH)
"""

import sys

N = int(sys.stdin.readline())
while N >= 2:
    for i in range(2, N + 1):
        if N % i == 0:
            print(i)
            break
    N = N // i
