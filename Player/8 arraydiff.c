#include <stdio.h>

int main(void) 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]-a[i+1]==k)
		{
			printf("%d",a[i]);
			break;
		}
	}
	return 0;
}
