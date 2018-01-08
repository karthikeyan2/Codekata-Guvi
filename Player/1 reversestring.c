#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int i,j,m,temp;
	scanf("%s",a);
	m=strlen(a);
	for(i=m-1,j=0;i>m/2,j<m/2;j++,i--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("%s",a);
	return 0;
}
