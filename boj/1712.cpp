/*
문제 링크 : https://www.acmicpc.net/problem/1712

code by Song Kitae(DKSH)
*/


#include <iostream>
using namespace std;

int main() {
	
	int A, B, C;
	cin >> A >> B >> C;
	
	if(C-B <= 0) cout << "-1\n";
	else cout << A/(C-B)+1;
	
	return 0;
}
