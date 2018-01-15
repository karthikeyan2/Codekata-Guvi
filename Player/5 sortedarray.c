#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j,flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=1;i<n,j<n;i++,j++)
	{
		if(a[j]>a[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
			printf("no");
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	return 0;
}
