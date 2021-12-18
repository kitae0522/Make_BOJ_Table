#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for(int i = 0; i < N * 2; i++) {
		if(i % 2 == 0) {
			for (int j = 0; j < N; j++) {
				if (j % 2 == 0) cout << "*";
				if (j % 2 == 1 && j != N - 1) cout << " ";
			}
			cout << "\n";
		}
		else {
			for (int j = 0; j < N; j++) {
				if (j % 2 == 0 && j != N - 1) cout << " ";
				if (j % 2 == 1) cout << "*";
			}
			cout << "\n";
		}
	}
}