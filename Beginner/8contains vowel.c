#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int m,i,flag=0;
	gets(a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			printf("yes");
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("no");
	}
		return 0;
}
