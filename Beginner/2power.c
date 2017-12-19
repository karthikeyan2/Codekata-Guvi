#include <stdio.h>

int main(void) 
{
	int n,m,i,r;
	scanf("%d",&n);
	scanf("%d",&m);
	r=n;
	for(i=1;i<=m-1;i++)
	{
		n=r*n;
	}
	printf("%d",n);
	return 0;
}
