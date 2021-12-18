#include <bits/stdc++.h>
using namespace std;

int arr[50][50];
bool visit[50][50];
int test_case, M, N, K, column, row;
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };
int cnt = 0;

void dfs(int x, int y)
{
	visit[x][y] = true;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < N && ny >= 0 && ny < M)
		{
			if (arr[nx][ny] && !visit[nx][ny])
			{
				visit[nx][ny] = true;
				dfs(nx, ny);
			}
		}
	}
}

void flush()
{
	cnt = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = 0;
			visit[i][j] = false;
		}
	}
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> test_case;

	while (test_case--)
	{
		flush();
		cin >> M >> N >> K;
		for (int i = 0; i < K; i++)
		{
			cin >> column >> row;
			if (column >= 0 && column < M && row >= 0 && row < N)
			{
				arr[row][column] = 1;
			}
		}
		for (int x = 0; x < N; x++)
		{
			for (int y = 0; y < M; y++)
			{
				if (arr[x][y] && !visit[x][y])
				{
					dfs(x, y);
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}
