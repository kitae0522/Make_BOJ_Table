#include <stdio.h>
#include <algorithm>
using namespace std;

int get_gcd(int num1, int num2)
{
	int smaller = min(num1, num2);
	int gcd;
	for(int i=1;i<smaller+1;i++)
	{
		if(num1 % i == 0 && num2 % i == 0)
			gcd = i;
	}
	return gcd;
}

int get_lcm(int num1, int num2)
{
    int bigger = max(num1, num2);

    while (1)
    {
    	if(bigger % num1 == 0 && bigger % num2 == 0)
    	    break;
        bigger += 1;	
	}
    return bigger;
}

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
    printf("%d\n%d", get_gcd(num1, num2), get_lcm(num1, num2));
    
    return 0;
}
