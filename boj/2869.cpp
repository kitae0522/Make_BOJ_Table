/*
문제 링크 : https://www.acmicpc.net/problem/2869

code by Song Kitae(DKSH)
*/

#include <stdio.h>

int main() {
	
	int a, b, v, cnt=0;
	
	scanf("%d %d %d", &a, &b, &v);
	cnt = (v-b-1)/(a-b)+1;
	printf("%d", cnt);	
	
	return 0;
}
