if __name__ == "__main__":
    numbers = [int(i, 2) for i in input().split()]
    print(format(numbers[0]+numbers[1], 'b'))
