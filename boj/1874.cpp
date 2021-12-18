#include <stdio.h>
#include <stack>
#include <vector>
using namespace std;

int main()
{

	int T, index = 1;
	stack<int> s;
	vector<char> v;
	
	for (scanf("%d", &T); T > 0; T--)
	{
		int N;
		scanf("%d", &N);

		if (s.empty())
		{
			s.push(index);
			index++;
			v.push_back('+');
		}
		if (!s.empty() && s.top() > N)
		{
			printf("NO");
			return 0;
		}
		while (!s.empty() && s.top() < N)
		{
			s.push(index);
			index++;
			v.push_back('+');
		}
		if (!s.empty() && s.top() == N)
		{
			s.pop();
			v.push_back('-');
		}
	}
	for (int i = 0; i < v.size(); i++)
		printf("%c\n", v[i]);

	return 0;
}
