#include <stdio.h>

int main(void) {
	int n,m,t;
	scanf("%d %d",&n,&m);
	t=n*m;
	if(t%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
	return 0;
}
