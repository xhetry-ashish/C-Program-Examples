#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x,flag=0;
	printf("\n Input any no.");
	scanf("%d",&x);
	if(x==1)
		printf("\n %d is neither prime nor composite",x);
	else
	{
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			flag=1;
		}
			if(flag==0)
				printf("\n %d is prime",x);
			else if(flag==1)
				printf("\n %d is composite",x);
	}
	getch();
}