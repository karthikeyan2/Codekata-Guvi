#include <stdio.h>

int main(void) {
	char a[15];
	scanf("%s",a);
	int i;
	for(i=0;a[i]!='\0';i=i+3)
	{
		printf("%c",a[i]);
	}
	return 0;
}
