#include <stdio.h>

int main(void) {
	char a[15],b;
	scanf("%s %c",a,&b);
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
		{
			printf("%d",i+1);
		}
	}
	return 0;
}
