"""
문제 링크 : https://boj.kr/1759

code by Song Kitae(DKSH)
"""


from itertools import combinations
import pprint

if __name__ == "__main__":
    vowels = ['a', 'e', 'i', 'o', 'u']
    consonant = ['b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z']
    arr = []
    l, c = map(int, input().split())
    cmd = input().split()
    cmd.sort()
    for passwd in combinations(cmd, l):
        cnt = 0
        for i in passwd:
            if i in vowels:
                cnt += 1

        if cnt >= 1 and cnt <= l-2:
            print(''.join(passwd))