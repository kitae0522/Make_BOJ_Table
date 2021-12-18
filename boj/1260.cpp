/*
문제 링크 : https://www.acmicpc.net/problem/1260

code by Song Kitae(DKSH)
*/

#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int c[1001];
vector<int> a[1001];
queue<int> q;

void bfs(int start) {
	q.push(start);
	c[start] = true;
	
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for(int i=0;i<a[x].size();i++) {
			int y = a[x][i];
			if(!c[y]) {
				q.push(y);
				c[y] = true;
			}
		}	
	}
}

void dfs(int x) {
	if(c[x]) return;
	c[x] = true;
	printf("%d ", x);
	for(int i=0;i<a[x].size();i++) {
		int y = a[x][i];
		dfs(y);		
	}
}

int main() {
	
	int N, M, V;
	cin >> N >> M >> V;
	for(int i=0;i<M;i++) {
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i=1;i<=N;i++) {
		sort(a[i].begin(), a[i].end());
	}
    
	dfs(V);
	puts("");
	memset(c, 0, sizeof(c));
	bfs(V);
	
	return 0;
}
