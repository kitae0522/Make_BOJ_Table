#include <stdio.h>

const int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
const int dy[] = { -1, 1, 0, 0, 1, -1, -1, 1 };

int n, m;
int arr[51][51];

void dfs(int x, int y)
{
	arr[x][y] = 0;
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
		if (arr[nx][ny]) dfs(nx, ny);
	}
}

int main()
{

    while (1)
    {
        int res = 0;
        scanf("%d %d", &m, &n);

        if (!n && !m) break;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                scanf("%d", &arr[i][j]);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (arr[i][j])
                    dfs(i, j), res++;
        printf("%d\n", res);
    }

    return 0;
}
