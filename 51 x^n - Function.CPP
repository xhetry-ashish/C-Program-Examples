#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	double x,y,n;
	double power(double x, double n);
	printf("\n Input the values of x & y=");
	scanf("%lf%lf",&x,&n);
	y=power(x,n);
	printf("\n x^n=%lf",y);
	getch();
}
double power(double x,double n)
{
	double y;
	y=exp(n*log(x));
	return(y);
}

