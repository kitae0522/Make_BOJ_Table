#include <stdio.h>

int main()
{
	int arr[7], sum=0, mn=100;
	for(int i=0;i<7;i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i]%2!=0)
		{sum+=arr[i];
		if(mn>arr[i]) mn=arr[i];}
	}
	if(mn==100) printf("-1");
	else printf("%d\n%d", sum, mn);
	
	return 0;
}
