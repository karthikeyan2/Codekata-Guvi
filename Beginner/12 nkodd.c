#include <stdio.h>

int main(void) {
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int a[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			
			for(j=i+1;j<n;j++)
			{
				if(a[j]%2!=0)
				{
					printf("%d",a[j]);
					break;
				}
			}
		break;
		}
		
	}
	
	return 0;
}
