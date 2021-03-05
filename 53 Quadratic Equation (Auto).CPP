#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float x,y;
	float quad(int a,int b,int c,int s);
	printf("\n Input coeffs");
	scanf("%d%d%d",&a,&b,&c);
	x=quad(a,b,c,1);
	y=quad(a,b,c,-1);
	printf("\n Root 1 = %f",x);
	printf("\n Root 2 = %f",y);
	getch();
}
float quad(int a,int b,int c,int s)
{
	float x;
	x=(-b+s*sqrt(b*b-4*a*c))/(2*a);
	return(x);
}
