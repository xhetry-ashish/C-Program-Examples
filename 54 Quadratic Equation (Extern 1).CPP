#include<stdio.h>
#include<conio.h>
#include<math.h>
int a,b,c;
void main()
{
	float x,y;
	float quad(int s);
	printf("\n Input coeffs");
	scanf("%d%d%d",&a,&b,&c);
	x=quad(1);
	y=quad(-1);
	printf("\n Root 1 = %f",x);
	printf("\n Root 2 = %f",y);
	getch();
}
float quad(int s)
{
	float x;
	x=(-b+s*sqrt(b*b-4*a*c))/(2*a);
	return(x);
}
