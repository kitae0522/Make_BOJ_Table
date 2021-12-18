def isPrime(numbers=int(7369000)):
    sieve = [True] * numbers
    for i in range(2, int(numbers**0.5) + 1):
        if sieve[i]:
            sieve[i*i::2*i] = [0]*((numbers-1-i*i)//(2*i)+1)
    arr = [2]+[i for i in range(3, numbers, 2) if sieve[i] == True]
    print(arr[int(input())-1])


isPrime()