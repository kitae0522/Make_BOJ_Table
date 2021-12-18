def get_gcd_euclidean(num1, num2):
    remainder = num1 % num2

    while remainder != 0:
        num1 = num2
        num2 = remainder
        remainder = num1 % num2

    gcd = num2
    return gcd


def get_lcm_euclidean(num1, num2):
    gcd = get_gcd_euclidean(num1, num2)
    quotient1 = num1 // gcd
    quotient2 = num2 // gcd
    lcm = gcd * quotient1 * quotient2
    return lcm


if __name__ == "__main__":
    def main():
        test_case_count = int(input())
        for i in range(test_case_count):
            num1, num2 = map(int, input().split())
            lcm = get_lcm_euclidean(num1, num2)
            print(lcm)
    main()
