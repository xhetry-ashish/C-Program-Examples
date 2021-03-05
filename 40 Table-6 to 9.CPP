#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k;
	for(i=6;i<=9;i++)
	{
		for(k=1;k<=10;k++)
		{
			printf("\n %d*%d=%d",i,k,i*k);
		}
	}
	getch();
}