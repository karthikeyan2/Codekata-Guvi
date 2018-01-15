#include <stdio.h>

int main(void) {
	int a[10];
	int n,k,flag=0;
	scanf("%d %d",&n,&k);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			flag=1;
			printf("yes");
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==0)
	printf("no");
	return 0;
}
