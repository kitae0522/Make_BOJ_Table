/*
문제 링크 : https://www.acmicpc.net/problem/1075

code by Song Kitae(DKSH)
*/

#include <iostream>
using namespace std;

int main()
{
	int N, F;
	
	cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	cin >> N >> F;
	
	N = (N / 100) * 100;
	for (int i = 0; i < 100; i++)
	{
		if ((N + i) % F == 0)
		{
			printf("%02d", i);
			break;
		}	
	}
	return 0;
}