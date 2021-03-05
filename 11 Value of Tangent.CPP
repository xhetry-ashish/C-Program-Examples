#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.141593
void main()
{
	float x,y;
	printf("\n Input angle in degree=");
	scanf("%f",&x);
	y=tan(x*PI/180);
	printf("\n tan%f=%f",x,y);
	getch();
}