"""
문제 링크 : https://acmicpc.net/problem/2839

code by Song Kitae(DKSH)
"""


def get_minimum_box(number):
    box_5_max = number // 5
    box_3_max = number // 3
    box_sum_list = []
    # print("박스 최대 값 5kg = {} 3kg = {}".format(box_5_max, box_3_max))
    for box_5_count in range(box_3_max + 1):
        for box_3_count in range(box_3_max + 1):
            if box_5_count * 5 + box_3_count * 3 == number:
                box_sum_list.append(box_5_count + box_3_count)
    if len(box_sum_list) == 0:
        return -1
    else:
        result = min(box_sum_list)
        return result

    result = min(box_sum_list)
    return result

if __name__ == "__main__":
    total_sugar = int(input())
    result = get_minimum_box(total_sugar)
    print(result)