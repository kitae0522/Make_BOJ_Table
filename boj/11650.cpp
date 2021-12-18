#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{

	int T;
	scanf("%d", &T);
	vector<pair<int, int> > v;

	for (int i = 0; i < T; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		printf("%d %d\n", v[i].first, v[i].second);
	

	return 0;
}