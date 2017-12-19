#include <stdio.h>

int main(void) 
{
	int yr;
	scanf("%d",&yr);
	if(yr%4==0)
	{
		printf("you were born in a leap year");
	}
	else
	{
		printf("you were born in an non leap year");
	}
	return 0;
}
