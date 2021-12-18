"""
문제 링크 : https://www.acmicpc.net/problem/2751

code by Song Kitae(DKSH)
"""

import sys


def merge_list(left_list, right_list):

    left_len = len(left_list)
    right_len = len(right_list)

    left_idx = 0
    right_idx = 0

    result_list = []

    while left_idx < left_len and right_idx < right_len:
        if left_list[left_idx] < right_list[right_idx]:
            result_list.append(left_list[left_idx])
            left_idx += 1
        else:
            result_list.append(right_list[right_idx])
            right_idx += 1

    if left_idx < left_len:
        result_list.extend(left_list[left_idx:])

    if right_idx < right_len:
        result_list.extend(right_list[right_idx:])

    return result_list


def merge_sort(data_list):

    list_len = len(data_list)

    if list_len == 1:
        return data_list

    mid_idx = list_len // 2

    left_list = data_list[:mid_idx]
    right_list = data_list[mid_idx:]

    left_list = merge_sort(left_list)
    right_list = merge_sort(right_list)

    return merge_list(left_list, right_list)


if __name__ == "__main__":
    data_count = int(sys.stdin.readline().strip())
    data_list = []
    for i in range(data_count):
        data_list.append(int(sys.stdin.readline().strip()))

    sorted_list = merge_sort(data_list)

    for num in sorted_list:
        print(num)