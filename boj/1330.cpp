/*
문제 링크 : https://www.acmicpc.net/problem/1330

code by Song Kitae(DKSH)
*/


#include <iostream>
using namespace std;

int main()
{
	
	int a, b;
	cin >> a >> b;
	
	if(a > b)
		cout << ">";
	else if(a < b)
		cout << "<";
	else
		cout << "==";
	
	return 0;
}