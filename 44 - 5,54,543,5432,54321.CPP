#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,k;
	for(i=5;i>=1;i--)
	{
		for(k=5;k>=i;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	getch();
}
