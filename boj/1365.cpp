#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int b_s(int num)
{
	int low = 0, high = arr.size() - 1;

	while (low < high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] >= num)
			high = mid;
		else
			low = mid + 1;
	}

	return high;
}

int main()
{
	int N, M;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> M;
		if (arr.empty())
			arr.push_back(M);
		else if (arr[arr.size() - 1] < M)
			arr.push_back(M);
		else
			arr[b_s(M)] = M;
	}

	cout << N - arr.size() << '\n';

	return 0;
}
