if __name__ == "__main__":
    N = int(input())
    sieve = [True] * 1000001
    m = int(1000001 ** 0.5)
    for i in range(2, m + 1):
        if sieve[i] == True:
            for j in range(i+i, 1000001, i):
                sieve[j] = False
    arr = [i for i in range(2, 1000001) if sieve[i] == True and i > N]

    res = 0
    for i in range(N, 1000001):
        if i == 1:
            continue
        if str(i) == str(i)[::-1]:
            if sieve[i]:
                res = i
                break
    if res == 0:
        res = 1003001
    print(res)
