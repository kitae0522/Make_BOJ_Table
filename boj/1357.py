if __name__ == "__main__":
    x, y = map(str, input().split())
    print(int("".join(list(reversed(str(int("".join(list(reversed(x)))) + int("".join(list(reversed(y))))))))))
