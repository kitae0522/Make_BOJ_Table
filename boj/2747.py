"""
문제 링크 : https://www.acmicpc.net/problem/2747

code by Song Kitae(DKSH)
"""
# 비슷한 문제도 이 버젼으로 제출하면 다 정답처리가 된다.
# 2747번
# 10826번


def fibo(n):
    a, b = 0, 1
    for i in range(n):
        a, b = b, a+b
    return a

if __name__ == "__main__":
    n = int(input())
    result = fibo(n)
    print(result)