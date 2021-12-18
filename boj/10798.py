a = [input() for _ in range(5)]
for i in range(max([len(x) for x in a])):
    for j in range(5):
        try:
            print(a[j][i], end="")
        except IndexError:
            continue
