#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1,x,f=1;
	printf("\n Input a no.");
	scanf("%d",&x);
	do{
		f=f*i;
		i++;
	  }while(i<=x);
	printf("\n Factorial=%d",f);
	getch();
}