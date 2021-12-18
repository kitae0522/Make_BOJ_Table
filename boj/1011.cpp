#include <stdio.h>
#define ll unsigned long long int

ll func(ll x, ll y)
{
	ll res = 1, pos = 1, gap = y-x;
	for(int i=2;pos<gap;i++)
	{
		pos += i/2;
		res++;
	}
	if (pos > gap) res--;
	return res;
}

int main()
{
	
	ll T, x, y;
	scanf("%lld", &T);
	
	while(T--)
	{
		scanf("%lld %lld", &x, &y);
		printf("%lld\n", func(x, y));
	}
	
	return 0;
}
