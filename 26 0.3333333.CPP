#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	float a;
	for(a=0.3;a<=0.3333333;a=(a*0.1)+0.3)
	{
		printf("\n %.7g",a);
	}
	getch();
}