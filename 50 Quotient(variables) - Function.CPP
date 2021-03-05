#include<stdio.h>
#include<conio.h>
void main()
{
	double x,y,z;
	double quot(double x,double y);
	printf("\n Input 2 nos.");
	scanf("%lf%lf",&x,&y);
	z=quot(x,y);
	printf("\n Quotient=%lf",z);
	getch();
}
double quot(double x,double y)
{
	double z;
	z=x/y;
	return(z);
}

