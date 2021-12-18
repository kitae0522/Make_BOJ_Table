T = int(input())
for _ in range(T):
    R, S = map(str, input().split())
    for i in range(len(S)):
        res = S[i] * int(R)
        print(res, end="")
    print()
