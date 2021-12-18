#include <stdio.h>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{

	ll N, M;
	scanf("%lld", &N);
	vector<ll> v(N);
	for (int i = 0; i < N; i++)
		scanf("%lld", &v[i]);
	sort(v.begin(), v.end());

	scanf("%lld", &M);
	for (int i = 0; i < M; i++)
	{
		ll x;
		scanf("%lld", &x);

		ll left = 0, right = N - 1, res = 0;
		while (left <= right)
		{
			ll mid = (left + right) / 2;
			x > v[mid] ? left = mid + 1 : (x < v[mid] ? right = mid - 1 : res = 1);
			if (res)
				break;
		}
		printf("%d ", res);
	}

	return 0;
}
