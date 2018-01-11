#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int i,n,k;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]== ' ')
		{
			for(k=i;k<n;k++)
			{
				a[k]=a[k+1];
			}
		n--;
		}
		
	}
	printf("%s",a);
	return 0;
}
