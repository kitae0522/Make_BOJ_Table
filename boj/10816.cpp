#include <stdio.h>
#include <unordered_map>
#define ll long long
using namespace std;

int main()
{
	ll N, M, tmp;
	unordered_map <ll, ll> m;

	for (ll i = 0; i < scanf("%lld", &N); i++)
	{
		scanf("%lld", &tmp);
		m[tmp]++;
	}

	for (ll i = 0; i < scanf("%lld", &M);; i++)
	{
		scanf("%lld", &tmp);
		printf("%d ", m[tmp]);
	}

	return 0;
}