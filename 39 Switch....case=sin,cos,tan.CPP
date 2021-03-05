#include<stdio.h>
#include<math.h>
#include<conio.h>
#define PI 3.141593
void main()
{
	clrscr();
	int x,a;
	printf("\n Input an angle=");
	scanf("\n%d",&x);
	printf("\n1.sin \n2.cos \n3.tan");
	printf("\n Select 1 to 3=");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		{
			printf("\n sin%d=%f",x,sin(x*PI/180));
			break;
		}
		case 2:
		{
			printf("\n cos%d=%f",x,cos(x*PI/180));
			break;
		}
		case 3:
		{
			printf("\n tan%d=%f",x,tan(x*PI/180));
			break;
		}
		default:
		{
			printf("\n Error!! Choose 1 to 4 only");
		}
	}
	getch();
}
