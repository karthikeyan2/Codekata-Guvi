#include <stdio.h>

int main(void) {
	int i,n,a,d,sum=0;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			sum=sum+a;
		}
		else
		{
			a=a+d;
			sum=sum+a;
			
		}
	}
	printf("%d",sum);
	return 0;
}
