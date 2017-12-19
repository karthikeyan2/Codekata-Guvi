#include <stdio.h>

int main(void)
{
	char a;
	scanf("%c",&a);
	if(a=='a' || a=='e' || a=='i'||a=='o'||a=='u')
	{
		printf("\n given character is a vowel");
	}
	else
	{
		printf("\n given character is a consonant");
	}
	return 0;
}
