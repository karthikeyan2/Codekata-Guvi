#include <stdio.h>

int main(void) {
	int a[10];

	int i,j,count=0;
	for(i=0;i<10;i++)
	{
		scanf("%d ",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
			}
		}
		if(count==1)
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}
