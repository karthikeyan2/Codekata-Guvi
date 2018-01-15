#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int i,m=2,flag=0;
	for(i=0;i<n;i++)
	{
		m=2*m;
		if(m==n)
		{
			flag=1;
			printf("yes");
			break;
		}
	}
	if(flag==0)
	printf("no");
	return 0;
}
