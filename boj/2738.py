N, M = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(N)]
for i in range(N):
    b = list(map(int, input().split()))
    for j in range(M):
        print(arr[i][j]+b[j], end=" ")
    print()
