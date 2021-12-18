#include <iostream>
#define ll unsigned long long
using namespace std;

ll b_s(ll size)
{
	if (size == 0 || size == 1) return 0;
	return b_s(size/2) + 1;	
}

ll t_s(ll size)
{
	if (size == 0 || size == 1) return 0;
	else if (size == 2) return 1;
	return t_s(size/3) + 2;
}

int main()
{
	ll Q, N;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> Q;
	
	while(Q--)
	{
		cin >> N;
		cout << b_s(N) << " " << t_s(N) << '\n';
	}
	
	return 0;
}