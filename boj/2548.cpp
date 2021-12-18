#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	
	int n, cmd;
	vector<int> arr;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	
	for(int i=0;i<n;i++)
	{
		cin >> cmd;
		arr.push_back(cmd);
	}
	
	sort(arr.begin(), arr.end());
	cout << arr[(n-1)/2];
	
	return 0;
}
