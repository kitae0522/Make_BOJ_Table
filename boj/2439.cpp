/*
문제 링크 : https://acmicpc.net/problem/2439

code by Song Kitae(DKSH)
*/


#include <stdio.h>

int main() {

    int n;   
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        for(int j=0;j<n-i;j++) {
            printf(" ");
        }
        for(int j=0;j<i;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
