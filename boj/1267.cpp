/*
문제 링크 : https://www.acmicpc.net/problem/1267

code by Song Kitae(DKSH)
*/


#include <iostream>
using namespace std;
int n, y=0, m=0;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		
		y += (a/30+1) * 10;
		m += (a/60+1) * 15;
	}
	if(y < m)
		cout << "Y " << y << '\n';
	else if(y > m)
		cout << "M " << m << '\n';
	else
		cout << "Y M " << y << '\n';

	return 0;
}