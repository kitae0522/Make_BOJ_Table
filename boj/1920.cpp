#include <stdio.h>
#include <algorithm>
#define mx int(1e5)

int main()
{
	int N, M;
	int v[mx + 1];

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d ", &v[i]);
	std::sort(v, v + N);

	for (scanf("%d", &M); M > 0; M--)
	{
		int x;
		scanf("%d", &x);

		int left = 0, right = N - 1, mid = 0, res = 0;
		while (left <= right)
		{
			int mid = (left + right) / 2;
			x > v[mid] ? left = mid + 1 : (x < v[mid] ? right = mid - 1 : res = 1);
			if (res)
				break;
		}
		printf("%d\n", res);
	}

	return 0;
}
