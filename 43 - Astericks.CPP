#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,k;
	for(i=5;i>=1;i--)
	{
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}