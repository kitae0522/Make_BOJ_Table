"""
문제 링크 : https://www.acmicpc.net/problem/11399

code by Song Kitae(DKSH)
"""


def sort_number(num_list):
    for x in range(len(num_list) - 1):
        for y in range(len(num_list) - 1):
            if num_list[y] > num_list[y + 1]:
                num_list[y], num_list[y + 1] = num_list[y + 1], num_list[y]
            elif num_list[y] == num_list[y+1]:
                num_list[y], num_list[y+1] = num_list[y], num_list[y+1]

    return num_list


def ATM(size, num_list):
    if size == 1:
        return num_list[0]
    else:
        num_list = sort_number(num_list)
        i_sum = 0
        min_sum = 0

        for i in range(size):
            min_sum += (i_sum + num_list[i])
            i_sum += num_list[i]
        return min_sum


if __name__ == '__main__':
    size = int(input())
    number = list(map(int, input().split()))
    print(ATM(size, number))
