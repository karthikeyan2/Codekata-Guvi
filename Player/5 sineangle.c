#include <stdio.h>
#include<math.h>
#define pi 3.14
int main(void) {
	int angle;
	scanf("%d",&angle);
	float value;
	value=sin(angle*pi/180);
	printf("%f",value);
	return 0;
}
