"""
문제 링크 : https://www.acmicpc.net/problem/2753

code by Song Kitae(DKSH)
"""


def leapyear(year):
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        return 1
    else:
        return 0

# print(leapyear(int(input())))