def fibo(n):
    a, b = 0, 1
    for i in range(n):
        a, b = b, a+b
    return a


if __name__ == "__main__":
    n = int(input())
    result = fibo(n)
    print(result)
