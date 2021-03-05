#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,k,m,c=7,r=1;
	for(i=1;i<=7;i++)
	{
		gotoxy(c,r);
		for(m=2*i-1;m>i;m--)
		{
			printf("%d",m%10);
		}
		for(k=i;k<2*i;k++)
		{
			printf("%d",k%10);
		}
		r++;
		c--;
	}
	getch();
}