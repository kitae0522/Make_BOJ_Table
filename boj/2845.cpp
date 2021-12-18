#include <iostream>
using namespace std;

int main()
{
	
	int n1,n2,a,b,c,d,e;
		
    scanf("%d %d", &n1, &n2);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	printf("%d %d %d %d %d", a-n1*n2, b-n1*n2, c-n1*n2, d-n1*n2, e-n1*n2);
	
	return 0;
}