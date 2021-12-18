#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
	
	ll T;
	vector<ll> arr;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> T;
	while(T--)
	{
		ll tmp;
		arr.push_back(0);
		cin >> tmp;
		arr.back() = tmp;
	}
	sort(arr.begin(), arr.end());
	
	cout << arr[0] * arr[arr.size()-1];
	
	return 0;
}