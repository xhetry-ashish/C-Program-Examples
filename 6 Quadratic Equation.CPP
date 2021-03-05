#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	float x,y,a,b,c;
	printf("\n Input values of a,b and c");
	scanf("%f%f%f",&a,&b,&c);
	x=(-b+sqrt(b*b-4*a*c))/(2*a);
	y=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("\n The real roots are=%f",x,y);
	getch();
}