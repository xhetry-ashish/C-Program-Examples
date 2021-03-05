#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int x[2][3],y[3][2],z[2][2],r,c,m;
	printf("\n Input x-matrix");
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&x[r][c]);
		}
	}
	printf("\n Input y-matrix");
	for(r=0;r<3;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&y[r][c]);
		}
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			z[r][c]=0;
			for(m=0;m<3;m++)
			{
				z[r][c]+=x[r][m]*y[m][c];
			}
			printf("\t %d",z[r][c]);
		}
		printf("\n");
	}
	getch();
}