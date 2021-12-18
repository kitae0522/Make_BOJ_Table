"""
문제 링크 : https://www.acmicpc.net/problem/2446

code by Song Kitae
"""


if __name__ == "__main__":
    count = int(input())
    tmp = count
    for i in range(1, count+1):
        print(' '*(i-1)+'*'*(2*(tmp-i)+1))
    for j in range(1, tmp):
        print(' '*(tmp-j-1)+'*'*(2*j+1))
