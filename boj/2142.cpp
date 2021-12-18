#include <stdio.h>

int arr[501][501];

int main() {

	int T;
	scanf("%d", &T);

    while(T--)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                scanf("%d", &arr[i][j]);
            }
        }

		int res=1;
        for(int i=1;i<n;++i)
        {
            for(int j=1;j<m;++j)
            {
                if(arr[i-1][j-1] + arr[i][j] > arr[i-1][j] + arr[i][j-1])
                {
                    res = 0;
                }
            }
        }

		if (res) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
