#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	for(a=0.1;a>=0.0000001;a*=0.1)
	{
		printf("\n %.7f",a);
	}
	getch();
}