"""
문제 링크 : https://acmicpc.net/problem/2441

code by Song Kitae(DKSH)
"""


if __name__ == "__main__":
    x = int(input())
    for i in range(x + 1):
        for space in range(i):
            print(" ", end="")
        for star in range(x - i):
            print("*", end="")
        print()
