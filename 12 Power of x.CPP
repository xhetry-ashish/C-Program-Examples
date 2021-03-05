#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float x,y,n;
	printf("\n Input values of x and n");
	scanf("%f%f",&x,&n);
	y=pow(x,n);
	printf("\n y=%f",y);
	getch();
}