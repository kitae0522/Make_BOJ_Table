"""
문제 링크 : https://www.acmicpc.net/problem/2442

code by Song Kitae
"""

if __name__ == "__main__":
    line_max = int(input())
    for line_count in range(1, line_max + 1):
        for space_count in range(line_max - line_count):
            print(" ", end="")
        for star in range(2 * line_count - 1):
            print("*", end="")
        print()