n = int(input())
arr = sorted(list(set(list(map(int, input().split())))))
for i in arr:
    print(i, end=" ")
