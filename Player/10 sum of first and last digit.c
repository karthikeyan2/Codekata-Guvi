#include <stdio.h>

int main(void) {
	int n,rem,sum=0,flag=0;
	scanf("%d",&n);
	while(n>0)
	{
		if(n<10)
		{
			rem=n%10;
			sum=sum+rem;
			break;
		}
		if(flag==0)
		{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		flag=1;
		}
		else
		{
		n=n/10;	
		}
		
		
	}
	printf("%d",sum);
	return 0;
}
