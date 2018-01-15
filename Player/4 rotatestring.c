#include <stdio.h>
#include<string.h>
int main(void) {
	char a[15];
	int k,n,i,j=0;
	n=strlen(a);
	char b[n];
	scanf("%s %d",a,&k);
	for(i=0;i<n;i++)
	{
		if(k<n)
		{
		b[k]=a[i];
		k++;
		}
		else
		{
		while(j<k)
		{
		b[j]=a[i];
		j++;
		}
		}
		
		
	}
	printf("%s",b);
	return 0;
}
