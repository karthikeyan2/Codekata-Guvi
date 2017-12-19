#include<stdio.h>
int main(void)
{
  int i,j,lower,upper;
  int b=0;
	scanf("%d %d",&lower,&upper);
  for (i=lower;i<=upper;i++)
	{
    for (j=2;j<=i;j++)
		{
      if (i%j==0)
			{
           break;
      }
    }
    if (i==j)
    printf("\n%d",j);
  }
return 0;
}
