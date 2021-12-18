/*
문제 링크 : https://acmicpc.net/problem/2438

code by Song Kitae
*/


#include <stdio.h>

int main() {

    int n;   
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        for(int j=0;j<i;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
