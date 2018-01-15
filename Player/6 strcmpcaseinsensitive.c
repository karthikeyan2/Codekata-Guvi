#include <stdio.h>
#include<string.h>
int main(void) {
	char a[15],b[15];
	int m,n,i,flag,u,v;
	scanf("%s %s",a,b);
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<n;i++)
	{
		if(a[i]>=65 && a[i]<=91)
		{
			u=a[i];
			v=u+32;
			a[i]=v;
		}
	}
	for(i=0;i<m;i++)
	{
		if(b[i]>=65 && b[i]<=91)
		{
			u=b[i];
			v=u+32;
			b[i]=v;
		}
	}
	if(n==m)
	{
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
			printf("No");
			break;
		}
	}
	}
	if(flag==1)
	printf("yes");
	return 0;
}
