#include<stdio.h>
int main(void)
{
int n1,n2,temp,sum=0,x,a,i;
scanf("%d",&n1);
scanf("\n%d",&n2);
for(i=n1;i<=n2;i++)
{
temp=i;
while(i!=0)
{
  a=i%10;
  x=a*a*a;
  sum=sum+x;
  i=i/10;
}
if(sum==temp)
{
   printf("%d",temp);
}
}

return 0;
}
