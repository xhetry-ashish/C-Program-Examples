#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int i;
	for(i=1;i<=90;i++)
	{
		printf("\n sin%d=%f",i,sin(i*3.141593/180));
	}
	getch();
}