#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1;
start:if(i<=10)
	{
		printf("\n %d",i);
		i++;
		goto start;
	}
	getch();
}