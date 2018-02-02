#include <stdio.h>
#include <math.h>
int main(void) {
	long int n,rem=0,i=1,sum=0;

	scanf("%ld",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem*i;
		n=n/10;
		i=i*2;
	}
	printf("%lx",sum);
	return 0;
}
