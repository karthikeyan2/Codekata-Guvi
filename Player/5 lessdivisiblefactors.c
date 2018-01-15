#include <stdio.h>

int main(void) {
	int n,flag;
	scanf("%d",&n);
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("yes");
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		printf("no");
	}
	return 0;
}
