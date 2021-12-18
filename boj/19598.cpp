#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Point
{
	int data;
	bool isTrue;
};

bool cmp(const Point &a, const Point &b)
{
    if (a.data < b.data)
        return true;
    else if(a.data == b.data)
        if(!a.isTrue && b.isTrue)
            return true;
        return false;
    return false;
}

int main()
{
	int n;
	vector<Point> stack;
	scanf("%d", &n);
	int ans = 0, cnt = 0;
	
	for(int i=0;i<n;i++)
	{
		int start, end;
		scanf("%d %d", &start, &end);
		Point p;
		
		p.data = start;
		p.isTrue = true;
		stack.push_back(p);
		
		p.data = end;
		p.isTrue = false;
		stack.push_back(p);
	}
	
	sort(stack.begin(), stack.end(), cmp);
	
	int size = stack.size();
	for(int i=0;i<size;i++)
	{
		if(stack[i].isTrue)
		{
			cnt++;
		}
        else
        {
            ans = max(ans, cnt);
            cnt--;
        }
    }	
	
	cout << ans;	
	
	return 0;
}