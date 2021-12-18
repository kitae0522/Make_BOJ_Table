/*
문제 링크 : https://www.acmicpc.net/problem/11729

code by Song Kitae(DKSH)
*/

#include <iostream>
using namespace std;

void moveNumber(int num, int from, int to, int other) {
	if(num == 0) return;
	moveNumber(num -1, from, other, to);
	printf("%d %d\n", from, to);
	moveNumber(num -1, other, to, from);
}

void cnt(int x) {
	int num = 1;
	while(--x) {
		num = num * 2 + 1;
	}
	printf("%d\n", num);
}

int main() {
	
	int num;
	cin >> num;
	cnt(num);
	moveNumber(num, 1, 3, 2);
	
	return 0;
}
