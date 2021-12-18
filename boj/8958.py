"""
문제 링크 : https://www.acmicpc.net/problem/8958

code by Song Kitae(DKSH)
"""


if __name__ == "__main__":
	count = int(input())
	for i in range(count):
		number = input()
		li = list(number)
		score = 0
		tmp = 1
		for j in range(len(li)):
			if li[j] == "O":
				score += tmp
				tmp += 1
			else:
				tmp = 1
		print(score)
