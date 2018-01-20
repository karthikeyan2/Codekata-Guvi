#include <stdio.h>

int main(void) {
	int n,count=0;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i+1]>a[i])
		{
			count=count+1;
		}
		else
		{
			break;
		}
	}
	printf("%d",count);
}
