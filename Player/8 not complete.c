#include <stdio.h>

int main(void) {
	int n,m,i,k,j;
	scanf("%d %d",&n,&m);
	int a[n],b[m],c[100];
	
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

for(j=0;j<m;j++)
{
	scanf("%d",&b[i]);
}
i=0;j=0;k=0;
while(i<n && j<m)
{
	if(a[i]<=b[j])
	{
		c[k]=a[i];
		k++;
		i++;
	}
	else
	{
		c[k]=b[j];
		k++;
		j++;
	}
}
while(i<n)
{
	
}
for(i=0;i<k;i++)
{
	printf("%d",c[k]);
}

	return 0;
}
