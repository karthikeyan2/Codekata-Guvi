#include <stdio.h>

int main(void) {
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-k;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
