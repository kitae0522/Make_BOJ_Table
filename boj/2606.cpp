#include <iostream>
#include <vector>
using namespace std;

int chk[101], count;
vector<int> arr[101];

void dfs(int x) {
    if(chk[x]) return;
    chk[x] = 1;
    count++;
    for(int i=0;i<arr[x].size();i++) {
        int y = arr[x][i];
        dfs(y);
    }
}

int main() {
	int N, M;
	cin >> N >> M;
    for(int i=1;i<=M;i++) {
        int num1, num2;
        cin >> num1 >> num2;
        arr[num1].push_back(num2);
        arr[num2].push_back(num1);
    }
    dfs(1);
    
	cout << count -1;
	return 0;
}
