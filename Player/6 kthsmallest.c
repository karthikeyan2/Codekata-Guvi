#include <stdio.h>

int main(void) {
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n];
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
		printf("%d",a[k]);
	
	return 0;
}
