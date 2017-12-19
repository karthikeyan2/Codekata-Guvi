#include <stdio.h>

int main(void) {
	long int n;
	scanf("%ld",&n);
	if(n>0)
	{
		printf("\n given number is positive");
	}
	else if(n<0)
	{
		printf("\n given number is negative");
	}
	else
	{
		printf("\n the number is 0");
	}
	return 0;
}
