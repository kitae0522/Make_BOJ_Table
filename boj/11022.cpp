#include <stdio.h>

int main() {
    
	int size, num1, num2;
	scanf("%d", &size);
	for(int i=0;i<size;i++) {
		scanf("%d %d", &num1, &num2);
		printf("Case #%d: %d + %d = %d\n", i+1, num1, num2, num1+num2);
	}
	return 0;
	
}