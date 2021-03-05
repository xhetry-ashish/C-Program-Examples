#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	int sum(int x,int y);
	printf("\n Input  nos.");
	scanf("%d%d",&x,&y);
	z=sum(x,y);
	printf("\n Sum=%d",z);
	getch();
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}
