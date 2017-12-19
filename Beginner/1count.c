#include <stdio.h>

int main(void)
{
	int n,count=0,m;
	scanf("%d",&n);
	m=n;
	while(m>0)
	{
count++;		
m=m/10;
		
		
	}
	printf("%d",count);


	return 0;
}
