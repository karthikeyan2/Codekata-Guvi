#include <stdio.h>

int main(void){
	long int n;
	int i,sum=0,rem;
	scanf("%ld",&n);
	i=1;
	while(n!=0)
	{
		rem=n%10;
		if(rem==0)
		{
			i=i+i;
		}
		else
		{
			sum=sum+(rem*i);
			i=i+i;
		}
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
