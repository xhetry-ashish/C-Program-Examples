#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char x,y;
	printf("\n Input an alphabet key=");
	x=getche();
	y=toupper(x);
	printf("\n capital letter is=%c",y);
	getch();
}
