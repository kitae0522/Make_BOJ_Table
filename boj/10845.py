"""
문제 링크 : https://www.acmicpc.net/problem/10845

code by Song Kitae(DKSH)
"""


import sys


if __name__ == "__main__":
    input = sys.stdin.readline
    num = int(input())
    queue = []
    for i in range(num):
        cmd = input().rstrip()
        if " " in cmd: 
            c,n = cmd.split()
            queue.append(int(n))
        elif cmd == "pop":
            if not queue:
                print("-1")
            else:
                print(queue[0])
                queue.pop(0)
        elif cmd == "size":
            print(len(queue))
        elif cmd == "empty":
            if not queue:
                print("1")
            else:
                print("0")
        elif cmd == "front":
            if not queue:
                print("-1")
            else:
                print(queue[0])
        elif cmd == "back":
            if not queue:
                print("-1")
            else:
                print(queue[-1])