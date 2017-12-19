#include <stdio.h>
int main(void)
{
    char a;
    scanf("%u",&a);
    if(64<=a<=122)
	{
		printf("\n Is an alphabet");
    }
    else
    {
		printf("\n not an alphabet");
	}
    return 0;	
}
