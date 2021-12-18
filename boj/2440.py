"""
문제 링크 : https://acmicpc.net/problem/2440

code by Song Kitae(DKSH)
"""

x = int(input())
for i in range(x + 1):
    for y in range(x - i):
        print("*", end="")
    print()
