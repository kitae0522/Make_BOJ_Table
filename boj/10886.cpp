#include <stdio.h>

int main()
{
	int T, sum = 0;
	for (scanf("%d", &T); T > 0; T--)
	{
		int N; scanf("%d", &N);
		!N ? sum-- : sum++;
	}
	printf("%s", sum > 0 ? "Junhee is cute!" : "Junhee is not cute!");

	return 0;
}
