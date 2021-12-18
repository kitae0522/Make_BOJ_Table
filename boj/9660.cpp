#include <stdio.h>

int main()
{
	long long int N;
	scanf("%lld", &N);
	printf("%s", N % 7 == 0 || N % 7 == 2 ? "CY" : "SK");	
	return 0;
}
