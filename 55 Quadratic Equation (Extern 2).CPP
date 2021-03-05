#include<stdio.h>
#include<conio.h>
#include<math.h>
int a,b,c;
float x,y;
void main()
{
	void quad(void);
	printf("\n Input coeffs");
	scanf("%d%d%d",&a,&b,&c);
	quad();
	printf("\n Root 1 = %f",x);
	printf("\n Root 2 = %f",y);
	getch();
}
void quad(void)
{
	x=(-b+sqrt(b*b-4*a*c))/(2*a);
	y=(-b-sqrt(b*b-4*a*c))/(2*a);
}
