#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	if (a.second < b.second) return true;
	else if (a.second > b.second) return false;
	if (a.first < b.first) return true;
	else return false;
}

int main()
{
	
	int N, time=0, res=0;
	vector<pair<int, int> > v;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;
	
	while(N--)
	{
		int t1, t2;
		cin >> t1 >> t2;
		v.push_back(make_pair(t1, t2));
	}
	sort(v.begin(), v.end(), compare);
    for(int i=0;i<v.size();i++)
    {
        if(time<=v[i].first){
            time=v[i].second;
            res++;
        }
    }
	cout << res;
	
	
	return 0;
}
