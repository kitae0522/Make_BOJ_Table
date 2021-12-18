if __name__ == "__main__":
    while True:
        n = input()
        if n == '0':
            break
        print("yes" if n == n[::-1] else "no")
