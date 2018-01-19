#include <stdio.h>

int main(void) {
	char a[10];
	scanf("%s",a);
	int i,flag=0,j;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			{
				flag=1;
				printf("yes");
				break;
			}
		}
		if(flag==1)
		{
			break;
		}
		
	
	}
	if(flag==0)
	{
		printf("no");
	}
	return 0;
}
