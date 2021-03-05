#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1,x,f=1;
	printf("\n Input a no.");
	scanf("%d",&x);
	while(i<=x)
	{
		f=f*i;
		i++;
	}
	printf("\n Factorial=%d",f);
	getch();
}