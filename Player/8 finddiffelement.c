#include <stdio.h>

int main(void) {
	int n,count=0,count1=0,temp,temp1;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			count=count+1;
			temp=a[i];
		}
		else
		{
			count1=count1+1;
			temp1=a[i];
		}
	}
	if(count==1)
		{
			printf("%d",temp);
		}
		if(count1==1)
		{
			printf("%d",temp1);
		}
	return 0;
}
