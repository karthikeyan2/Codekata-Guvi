#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	char b[10];
	int i,j;
	int m=strlen(b);
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
		
	}
	for(j=0;j<m;j++,i++)
	{
		a[i]=b[j];
		
	}
	a[i]='\0';
	printf("%s",a);
	return 0;
}
