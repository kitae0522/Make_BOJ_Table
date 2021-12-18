def isPrime(num1, num2):
    sieve = [True] * num2
    for i in range(2, int(num2**0.5) + 1):
        if sieve[i]:
            for j in range(2*i, num2, i):
                sieve[j] = False
    arr = [i for i in range(num1, num2) if i > 1 and sieve[i] == True]
    return arr


if __name__ == "__main__":
    num1, num2 = int(input()), int(input())
    arr = isPrime(num1, num2+1)
    print(f"{sum(arr)}\n{min(arr)}" if len(arr) != 0 else "-1")
