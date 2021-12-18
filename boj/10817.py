def get_middle_value(num1, num2, num3):

    if num1 > num2:
        num1, num2 = num2, num1
    if num1 > num3:
        num1, num3 = num3, num1

    if num2 > num3:
        num2, num3 = num3, num2

    result = num2
    return result


if __name__ == "__main__":
    def main():
        num1, num2, num3 = map(int, input().split())
        result = get_middle_value(num1, num2, num3)
        print(result)

    main()
