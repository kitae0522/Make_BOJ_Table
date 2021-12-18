"""
문제 링크 : https://www.acmicpc.net/problem/2562

code by Song Kitae(DKSH)
"""


if __name__ == '__main__':
    arr = []
    max_num = 0
    max_index = 0
    for i in range(9):
        number = int(input())
        arr.append(number)
        if arr[i] > max_num:
            max_num = arr[i]
            max_index = i + 1
    print("{}\n{}".format(max_num, max_index))