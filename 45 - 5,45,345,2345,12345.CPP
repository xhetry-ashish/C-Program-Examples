#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,k,c=5,r=1;
	for(i=5;i>=1;i--)
	{
		gotoxy(c,r);
		for(k=i;k<=5;k++)
		{
			printf("%d",k);
		}
		r++;
		c--;
	}
	getch();
}