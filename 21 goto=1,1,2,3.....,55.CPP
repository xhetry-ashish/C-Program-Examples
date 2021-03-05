#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1,a=1,b=1,c;
start:if(i<=10)
	{
		printf("\n %d",a);
		c=a+b;
		a=b;
		b=c;
		i++;
		goto start;
	}
	getch();
}