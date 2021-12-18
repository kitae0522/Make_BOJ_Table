#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	
	int N, arr[100001] = {0, }, dp[100001] = {0, };
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;
	
	for(int i=0;i<N;i++)
	{
		cin >> arr[i];
		dp[i] = arr[i];
	}
	
	for(int i=1;i<N;i++)
		dp[i] = max(dp[i], dp[i-1] + arr[i]);
	cout << *max_element(dp, dp+N) << '\n';
	
	return 0;
}
