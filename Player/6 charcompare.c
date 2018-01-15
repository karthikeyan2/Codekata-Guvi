#include <stdio.h>

int main(void) {
	char a[15],b[15];
	scanf("%s %s",a,b);
	int i,j,flag;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			printf("yes");
			break;
		}
		
		
	}
	if(flag==0)
	{
		printf("no");
	}
	return 0;
}
