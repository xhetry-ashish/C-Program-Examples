#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,x,y,hcf;
	printf("\n Input two integer nos.");
	scanf("\n %d%d",&x,&y);
	while(i<=x&&i<=y)
	{
		if(x%i==0 && y%i==0)
		hcf=i;
		i++;
	}
	printf("\n The hcf=%d",hcf);
	getch();
}
