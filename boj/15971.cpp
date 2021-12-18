#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#define INFT 1000000
using namespace std;

int room, s, e, n1, n2, cost;
vector<pair<int, int> > array[INFT];
int visit[INFT], obj1, obj2;

void dfs(int node, int path_len, int mx)
{
	int v, c;
	visit[node] = 1;
	
	for(int i=0;i<array[node].size();i++)
	{
		v = array[node][i].first;
		c = array[node][i].second;
		
		if(visit[v]) continue;
		
		if(v == e)
		{
			obj1 = path_len + c;
			obj2 = max(mx, c);
		}
		else
		{
			dfs(v, path_len + c, max(mx, c));
		}
	}
}

int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> room >> s >> e;
	
	for(int i=0;i<room-1;i++)
	{
		cin >> n1 >> n2 >> cost;
		array[n1].push_back(make_pair(n2, cost));
		array[n2].push_back(make_pair(n1, cost));
	}
	
	dfs(s, 0, 0);
	
	cout << obj1 - obj2;
	
	return 0;
}
