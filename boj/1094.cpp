#include <iostream>
using namespace std;

int main() {
    int x;
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
	cin >> x;
    int cnt = 0;
    for (int i = 0; i <= 6; i++)
    {
        if (x & (1<<i))
			cnt++;
    }
    
    
    cout << cnt << '\n';
    
    
    
    return 0;
}