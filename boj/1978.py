"""
문제 링크 : https://www.acmicpc.net/problem/1978

code by Song Kitae(DKSH)
"""

def primeNumber(n):
    if n == 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True
    

if __name__ == '__main__':
    def main():
        input_num = int(input())
        input_sosu = list(map(int, input().split()))

        sosu_count = 0
        for i in input_sosu:
            if primeNumber(i):
                sosu_count += 1
        print(sosu_count)
    main()