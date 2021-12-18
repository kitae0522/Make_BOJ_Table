/*
문제 링크 : https://www.acmicpc.net/problem/2667

code by Song Kitae(DKSH)
*/

#include <iostream>
#include <algorithm>

using namespace std;

int map[30][30];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int cnt = 0;
int ans = 0;
int complex[1001] = {0, };

int N;

void dfs(int x, int y) {
	map[x][y] = -1;
	cnt++;
	for(int i=0; i<4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(0<=nx && nx<N && 0<=ny && ny < N && map[nx][ny] == 1) {
			dfs(nx, ny);
		}
	}
}

int main() {
	scanf("%d", &N);
	
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			if(map[i][j] == 1) {
				//printf("\n");
				cnt = 0;
				dfs(i, j);
				complex[ans++] = cnt;
				//printf("\n");
			}
		}
	}
	
	
	sort(complex, complex+ans);
	
	printf("%d\n", ans);
	for(int i=0;i<ans;i++) {
		printf("%d\n", complex[i]);
	}
	
	return 0;
}