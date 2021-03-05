#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,i,hcf;
	printf("\n Input two integer nos.");
	scanf("\n %d%d",&x,&y);
	for(i=1;i<=x&&i<=y;i++)
	{
		if(x%i==0 && y%i==0)
		hcf=i;
	}
	printf("\n The hcf=%d",hcf);
	getch();
}
