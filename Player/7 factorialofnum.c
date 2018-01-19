#include <stdio.h>

int main(void) {
	int n,i,facto=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		facto=facto*i;
	}
	printf("%d",facto);
	return 0;
}
