#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,x,flag=0;
	printf("\n Input any no.");
	scanf("%d",&x);
	if(x==1)
		printf("\n %d is neither prime nor composite",x);
	else
	{
	do{
		if(x%i==0)
		flag=1;
		i++;
	  }while(i<x);
	if(flag==0)
		printf("\n %d is prime",x);
	else if(flag==1)
		printf("\n %d is composite",x);
	}
	getch();
}