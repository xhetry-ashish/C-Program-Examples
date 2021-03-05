#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
	clrscr();
	char x[10],temp;
	int i,k;
	printf("\n Input 10 characters = ");
	for(i=0;i<=9;i++)
	x[i]=toupper(getche());
	for(i=0;i<=8;i++)
	{
		for(k=i+1;k<=9;k++)
		{
			if(x[i]>x[k])
			{
				temp=x[i];
				x[i]=x[k];
				x[k]=temp;
			}
		}
		printf("\n %c",x[i]);
	}
	getch();
}