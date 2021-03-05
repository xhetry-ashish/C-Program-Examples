#include<math.h>
#include<stdio.h>
#include<conio.h>
#define PI 3.141593
void main()
{
	clrscr();
	float r,Area,Peri;
	printf("\n Input radius=");
	scanf("%f",&r);
	Area=PI*r*r;
	Peri=2*PI*r;
	printf("\n Area=%fsq.cm",Area);
	printf("\n Perimeter=%fcm",Peri);
	getch();
}