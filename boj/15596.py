"""
문제 링크 : https://www.acmicpc.net/problem/15596

code by Song Kitae(DKSH)
"""

def solve(number):
    result = 0
    for i in number:
        result += i
    return result

# print(solve([1, 4, 5, 2]))