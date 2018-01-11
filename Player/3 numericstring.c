#include <stdio.h>

int main(void) {
	char a[10];
	scanf("%s",a);
	int i,flag=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	printf("no");
	return 0;
}
