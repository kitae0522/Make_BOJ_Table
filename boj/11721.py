import sys

N = sys.stdin.readline().rstrip("\n")

for i in range(len(N)):
	if i % 10 == 0 and i != 0:
		print()
	print(N[i], end="")