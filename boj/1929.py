"""
문제 링크 : https://www.acmicpc.net/problem/1929

code by Song Kitae(DKSH)
"""


def isPrime(num1, num2):
    sieve = [True] * num2
    for i in range(2, int(num2**0.5) + 1):
        if sieve[i]:
            for j in range(2*i, num2, i):
                sieve[j] = False
    for i in range(num1, num2):
        if i > 1 and sieve[i] == True:
            print(i)


if __name__ == "__main__":
    num1, num2 = map(int, input().split())
    isPrime(num1, num2+1)