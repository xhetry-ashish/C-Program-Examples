#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,x,y,hcf;
	printf("\n Input two integer nos.");
	scanf("\n %d%d",&x,&y);
	do{
		if(x%i==0 && y%i==0)
		hcf=i;
		i++;
	  }while(i<=x&&i<=y);
	printf("\n The hcf=%d",hcf);
	getch();
}
