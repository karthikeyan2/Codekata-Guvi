#include <stdio.h>

int main(void) {
	int n,k;
	scanf("%d %d",&n,&k);
	int i,m=k,flag=0;
	for(i=0;i<n;i++)
	{
		m=k*m;
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
