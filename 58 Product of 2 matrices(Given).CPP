#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int x[3][3]={3,5,7,2,-3,4,4,5,2},y[3][2]={7,6,6,-5,4,3},z[3][2],r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<2;c++)
		{
			z[r][c]=x[r][0]*y[0][c]+x[r][1]*y[1][c]+x[r][2]*y[2][c];
			printf("\t %d",z[r][c]);
		}
		printf("\n");
	}
	getch();
}