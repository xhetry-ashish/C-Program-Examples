#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,k;
	char a[5]={'N','E','P','A','L'};
	for(i=0;i<=4;i++)
	{
		for(k=0;k<=i;k++)
		{
			printf("%c",a[k]);
		}
		printf("\n");
	}
	getch();
}