#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;
int N, K, tmp;
int ans = 0;

bool can(int x)
{
	int sum = 0, cnt = 0;
	int cmp = 0x7f7f7f7f;
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
		if (sum >= x)
		{
			cmp = min(cmp, sum);
			cnt++;
			sum = 0;

			if (cnt >= K)
			{
				ans = max(cmp, ans);
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int left = 0, right = 1e9, mid;

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> N >> K;
	
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		arr.push_back(tmp);
	}


	while (left <= right) {
		mid = (left + right) / 2;

		if (can(mid))
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	cout << ans;

	return 0;
}