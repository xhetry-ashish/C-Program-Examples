#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,x,f=1;
	printf("\n Input a no.");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	printf("\n Factorial=%d",f);
	getch();
}