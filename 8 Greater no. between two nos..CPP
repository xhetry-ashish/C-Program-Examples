#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	printf("\n Input two nos.");
	scanf("%d%d",&x,&y);
	if(x>y)
		printf("\n %d is greater",x);
	else
		printf("\n %d is greater",y);
	getch();
}