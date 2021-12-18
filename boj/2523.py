if __name__ == "__main__":
    count = int(input())
    tmp = count
    for i in range(1, count+1):
        print("*" * (i))
    for j in range(1, tmp):
        print("*" * (tmp - j))
