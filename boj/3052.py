"""
문제 링크 : https://boj.kr/3052

code by Song Kitae(DKSH)
"""

if __name__ == "__main__":
    arr = []
    ans = 0

    for i in range(10):
        N = int(input())
        arr.append(N % 42)
    arr = set(arr)
    print(len(arr))
