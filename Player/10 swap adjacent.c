#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a[n];
	int temp,i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
