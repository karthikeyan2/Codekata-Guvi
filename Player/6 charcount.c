#include <stdio.h>

int main(void) {
	char a[15],b;
	scanf("%s %c",a,&b);
	int i,count=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
