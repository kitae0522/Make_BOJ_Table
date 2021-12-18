/*
문제 링크 : https://www.acmicpc.net/problem/10989

code by Song Kitae(DKSH)
*/


#include <stdio.h>

int arr[10000];
int main() {
    int N;
    scanf("%d", &N);
    for(int i=0;i<N;i++) {
        int x;
        scanf("%d", &x);
        arr[x-1]++;
    }
    for(int i=0;i<10000;i++) {
        if(arr[i] > 0) {
            for(int j=0;j<arr[i];j++) {
                printf("%d\n", i+1);
            }
        }
    }
    return 0;
}
