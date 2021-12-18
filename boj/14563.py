"""
문제 링크 : https://www.acmicpc.net/problem/14563

code by Song Kitae(DKSH)
"""


def perfect_num(num):
    sum = 0
    for i in range(1, num, 1):
        if num % i == 0:
            sum += i
    if sum == num:
        print("Perfect")
    elif sum < num:
        print("Deficient")
    else:
        print("Abundant")

if __name__ == "__main__":
    def main():
        test_case_count = int(input())
        test_num_list = list(map(int, input().split()))
        for i in range(test_case_count):
            perfect_num(test_num_list[i])

    main()
