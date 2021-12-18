N = input()
arr = list(reversed(sorted([int(N[i]) for i in range(len(N))])))
for i in range(len(N)):
    print(str(arr[i]), end="")
