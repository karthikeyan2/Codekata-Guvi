#include <stdio.h>

int main(void) {
	int n,m,p,max=0,j;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		m=a[j]-a[i];
		p=a[i]-a[j];
		if(m>max)
		{
			max=m;
		}
		if(p>max)
		{
			max=p;
		}
	}
	printf("%d",max);
	return 0;
}
