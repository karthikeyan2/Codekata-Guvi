#include<stdio.h>
int main(void)
{
int n,temp,sum=0,x,a;
scanf("%d",&n);
temp=n;
while(n!=0)
{
  a=n%10;
  x=a*a*a;
  sum=sum+x;
  n=n/10;
}
if(sum==temp)
{
   printf("amstrong number");
}
else
{
  printf("\n not an amstrong number");
}
return 0;
}
