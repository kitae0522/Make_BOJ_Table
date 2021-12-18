"""
문제링크 : https://www.acmicpc.net/problem/1436

code by Song Kitae(DKSH)
"""


if __name__ == "__main__":
    num = int(input())
    cnt = 0
    init = 666

    while num:
        if cnt == num:
            print(init-1)
            break
        if "666" in str(init):
            cnt += 1
        init += 1
