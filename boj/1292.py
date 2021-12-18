"""
문제 링크 : https://www.acmicpc.net/problem/1292

code by Song Kitae(DKSH)
"""


if __name__ == "__main__":
	arr = []
	for i in range(1, 101):
		arr += [i] * i
	a, b = map(int, input().split())
	print(sum(arr[a-1:b]))
