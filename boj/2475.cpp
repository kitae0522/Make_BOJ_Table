/*
문제 링크 : https://www.acmicpc.net/problem/2475

code by Song Kitae(DKSH)
*/


#include <iostream>
using namespace std;

int main()
{
	
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	
	cout << ((a*a) + (b*b) + (c*c) + (d*d) + (e*e)) % 10;
	
	return 0;
}