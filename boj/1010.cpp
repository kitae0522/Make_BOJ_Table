#include <stdio.h>
#define ll long long int
ll nCr(ll n, ll r)
{
	ll res = 1;
	for(int i=0;i<r;i++)
	{
		res *= (n-i);
		res /= (i+1);
	}
	return res;
}

int main()
{

	// mCn = m! / ((m-n)! * n!)
	
	ll T, N, M;
	
	scanf("%lld", &T);
	
	while(T--)
	{
		scanf("%lld %lld", &N, &M);
		printf("%lld\n", nCr(M, N));
	}
	
	return 0;
}
