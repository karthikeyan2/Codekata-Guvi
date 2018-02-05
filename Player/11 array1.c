#include <stdio.h>

int main(void) {
	int n,sum=0;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			sum=sum+a[i];
		}
		else
		{
			sum=sum+a[i+1];
		}
	}
	printf("%d",sum);
	return 0;
}
