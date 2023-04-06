#include<stdio.h>
#include<math.h>
#define PI 3.14159
void main()
{
	int degree; float radian;
	printf("Table of sin(x)\t\tTable of cos(x)\n\n");
	for (degree=0; degree<=90; degree++)
	{
		radian= (degree*PI)/180;
		printf("sin(%d)= %f\tcos(%d)= %f\n",degree,sin(radian),degree,cos(radian));
	}
	return 0;
}
