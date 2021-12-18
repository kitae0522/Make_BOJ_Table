#include <stdio.h>
#define ll long long int

ll arr[50] = {0, 1,};
ll fibo(int N)
{
    if(N == 0 || N == 1)
        return arr[N];
    else if(arr[N] == 0)
        arr[N] = fibo(N-1)+fibo(N-2);
    return arr[N];
}

int main()
{
    int T;

	scanf("%d", &T);
    while(T--)
    {
        int tmp;
        scanf("%d", &tmp);
        if (tmp == 0)
        	printf("1 0\n");
        else
			printf("%d %d\n", fibo(tmp-1), fibo(tmp));
    }
}
