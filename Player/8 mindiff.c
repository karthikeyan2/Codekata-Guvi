#include <stdio.h>

int main(void) {
	int n,m,j,temp=0;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[n-1];
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
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			m=a[j]-a[i];
			if(m<min)
			{
				min=m;
			}
			
		}
	}
	printf("%d",min);
	return 0;
}
