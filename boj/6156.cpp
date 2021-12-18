#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 100000000;
int arr[101][101];

int main() { 

    int cow, line;
    scanf("%d %d", &cow, &line);
    for(int i=1;i<=cow;i++) {
        for(int j=1;j<=cow;j++) {
            arr[i][j] = INF;
        }
	}
	
	// 소끼리의 관계표시 
    for(int i=0;i<line;i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        arr[a][b] = 1;
        /*
		if a = 5, b = 5
		{
			{1,1,1,1,1},
			{1,1,1,1,1},
			{1,1,1,1,1},
			{1,1,1,1,1},
			{1,1,1,1,1}
		}
		*/
    }
    
    // Floyd Warshall 알고리즘 
    for(int k=1;k<=cow;k++) {
    	// k = 거쳐가는 노드 
        for(int i=1;i<=cow;i++) {
        	// i = 출발 노드 
        	for(int j=1;j<=cow;j++) {
        		// j = 도착 노드 
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
			}
		}
	}
	
	int res=0;
	
	for(int i=1;i<=cow;i++) {
		int cnt=0;
        for(int j=1;j<=cow;j++) {
            if(i == j) continue;
            if(arr[i][j] != INF) cnt++;
        }
        for(int j=1;j<=cow;j++) {
            if(i == j) continue;
            if(arr[j][i] != INF) cnt++;
        }
        if(cnt == cow - 1) res++;
    }
    printf("%d", res);
    
    return 0;
}
