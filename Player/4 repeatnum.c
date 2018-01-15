#include <stdio.h>

int main(void) {
	int n,k;
	scanf("%d %d",&n,&k);
	int i,a,count=0;
	while(n>0)
	{
		a=n%10;
		if(a==k)
		{
			count=count+1;
		}
		n=n/10;
	}
	printf("%d",count);
	return 0;
}
