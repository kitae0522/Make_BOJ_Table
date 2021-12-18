#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

ll get_gcd(ll num1, ll num2)
{
	ll tmp = num1 % num2;
	while(tmp != 0)
	{
		num1 = num2;
		num2 = tmp;
		tmp = num1 % num2;
	}
	ll gcd = num2;
	return gcd;
}

ll get_lcm(ll num1, ll num2)
{
	ll gcd = get_gcd(num1, num2);
	ll q1 = num1 / gcd;
	ll q2 = num2 / gcd;
	ll lcm = gcd * q1 * q2;
	return lcm;
}

int main()
{
	
	ll n1, n2;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n1 >> n2;
	cout << get_lcm(n1, n2);
}
