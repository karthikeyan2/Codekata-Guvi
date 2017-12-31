#include <stdio.h>

int main(void) {
	int m,n,o;
	scanf("%d %d %d",&m,&n,&o);
	
	if(m>n)
	{
		if(m<o)
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
