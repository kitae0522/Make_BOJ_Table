"""
문제 링크 : https://www.acmicpc.net/problem/1110

code by Song Kitae(DKSH)
"""


if __name__ == "__main__":
    num = int(input())
    check_number = num
    i = 0
    while True:
        tmp = (num//10) + (num%10)
        new_number = 10*(num%10) + (tmp%10)
        i += 1
        num = new_number
        if num == check_number:
            break
    print(i)
