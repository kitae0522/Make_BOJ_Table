#include <iostream>
using namespace std;

int main()
{

	int T;
	cin >> T;
	while (T--)
	{
		int N, M, sum = 0;
		cin >> N;
		while (N--)
		{
			cin >> M;
			sum += M;
		}
		cout << sum << '\n';
	}


	return 0;
}