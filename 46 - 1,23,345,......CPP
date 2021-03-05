#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,k;
	for(i=1;i<=7;i++);
	{
		for(k=i;k<2*i;k++)
		{
			printf("%d",k%10);
		}
		printf("\n");
	}
	getch();
}