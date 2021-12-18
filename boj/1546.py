N, arr = int(input()), list(map(int, input().split()))
MAX, SUM = max(arr), 0
for i in arr:
    SUM += i/MAX*100
print("%02f" % (SUM/N))
