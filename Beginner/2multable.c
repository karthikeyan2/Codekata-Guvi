#include <stdio.h>

int main(void)
{
	int i, n,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m=i*i;
		printf("\n%d*%d=%d",i,i,m);
	}
	
	return 0;
}
