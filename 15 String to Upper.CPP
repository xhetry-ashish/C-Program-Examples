#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char x[20];
	printf("\n Input a string ");
	gets(x);
	printf("\n %s",strupr(x));
	getch();
}
